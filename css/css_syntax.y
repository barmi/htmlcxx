%{
#include <stdio.h>
#include <string.h>
#include "css_lex.h"
#include "parser.h"

#define YYPARSE_PARAM yyparam
#define YYERROR_VERBOSE 1
//#define YYDEBUG 1

%}

%pure_parser

%union {
	char *lexeme;
	char letter;
	struct property_t *property;
	struct selector_t *selector;
	struct selector_list_t *selector_list;
	int pseudo_class;
	int pseudo_element;
}

%token IMPORT_SYM
%token IMPORTANT_SYM
%token IDENT
%token STRING
%token NUMBER
%token PERCENTAGE
%token LENGTH
%token EMS
%token EXS
%token LINK_PSCLASS_AFTER_IDENT
%token VISITED_PSCLASS_AFTER_IDENT
%token ACTIVE_PSCLASS_AFTER_IDENT
%token FIRST_LINE_AFTER_IDENT
%token FIRST_LETTER_AFTER_IDENT
%token HASH_AFTER_IDENT
%token CLASS_AFTER_IDENT
%token LINK_PSCLASS
%token VISITED_PSCLASS
%token ACTIVE_PSCLASS
%token FIRST_LINE
%token FIRST_LETTER
%token HASH
%token CLASS
%token URL
%token RGB
%token CDO
%token CDC
%token CSL

%type <pseudo_class> solitary_pseudo_class
%type <pseudo_class> pseudo_class
%type <selector> selector
%type <selector> simple_selector
%type <selector> simple_selectors
%type <selector_list> selectors
%type <selector_list> ruleset
%type <selector_list> rulesets
%type <pseudo_element> pseudo_element
%type <selector> solitary_pseudo_element
%type <letter> unary_operator
%type <letter> operator
%type <property> declaration
%type <property> declarations
%type <lexeme> NUMBER
%type <lexeme> STRING
%type <lexeme> PERCENTAGE
%type <lexeme> LENGTH
%type <lexeme> EMS
%type <lexeme> EXS
%type <lexeme> URL
%type <lexeme> RGB
%type <lexeme> IDENT
%type <lexeme> HASH
%type <lexeme> HASH_AFTER_IDENT
%type <lexeme> CLASS_AFTER_IDENT
%type <lexeme> CLASS
%type <lexeme> hexcolor
%type <lexeme> value
%type <lexeme> id
%type <lexeme> solitary_id
%type <lexeme> term
%type <lexeme> property
%type <lexeme> expr
%type <lexeme> element_name
%type <lexeme> class
%type <lexeme> solitary_class
%type <lexeme> string_or_url

%%

stylesheet
: comments imports rulesets	{
						*(struct selector_list_t**) yyparam = $3;
					}
;

rulesets
: ruleset comments rulesets	{
								struct selector_list_t *pos = $1;
								if (pos != NULL) {
									while (pos->next != NULL) {
										pos = pos->next;
									}
									pos->next = $3;
								} else {
									$1 = $3;
								}
								$$ = $1;
							}
| { $$ = NULL;  }
;

imports
: import comments imports
|
;

comments
: comments comment
|
;

comment
: CDO
| CDC
| CSL
;

import
: IMPORT_SYM string_or_url ';' /* E.g., @import url(fun.css); */
;

string_or_url
: STRING { $$ = $1; }
| URL	{
			char *begin = $1;
			char *end = $1 + strlen($1);

			/* Skip url( */
			begin += 4;
			/* skip whitespace */
			while (*begin == ' ')
				++begin;

			/* Skip ) */
			end -= 2;
			/* skip whitespace */
			while (*end == ' ')
				--end;

			end[1] = 0;

			$$ = strdup(begin);
			free($1);
		}
;

unary_operator
: '-' { $$ = '-'; }
| '+' { $$ = '+'; }
;

operator
: '/' { $$ = '/'; }
| ',' { $$ = ','; }
| /* empty */ {$$ = ' '; }
;

property
: IDENT { $$ = $1; }
;

ruleset
: selectors '{' declarations '}'	{
										struct selector_list_t *pos = $1;
										while (pos != NULL) {
											struct property_t *i = $3;
											while (i != NULL) {
												i->count++;
												i = i->next;
											}
											pos->selector->property = $3;
											pos = pos->next;
										}
										$$ = $1;
									}
;

selectors
: selector	{
				if ($1 != NULL) {
					$$ = (struct selector_list_t*)
						malloc (sizeof(struct selector_list_t));
					$$->selector = $1;
					$$->next = NULL;
				} else {
					$$ = NULL;
				}
			}
| selector ',' selectors	{
								if ($1 != NULL) {
									struct selector_list_t *new;
									new = (struct selector_list_t*)
										malloc (sizeof(struct selector_list_t));
									new->selector = $1;
									new->next = $3;
									$$ = new;
								} else {
									$$ = $3;
								}
							}
;

declarations
: declaration 					{
									$$ = $1;
								}
| declaration ';' declarations	{
									if ($1 != NULL) {
										$1->next = $3;
										$$ = $1;
									} else {
										$$ = $3;
									}
								}
;

selector
: simple_selectors pseudo_element	{
										struct selector_t *pos = $1;
										while (pos->next != NULL) {
											pos = pos->next;
										}
										pos->pseudo_element = $2;
										$$ = $1;
									}
| simple_selectors solitary_pseudo_element	{
												struct selector_t *pos = $1;
												while (pos->next != NULL) {
													pos = pos->next;
												}
												pos->next = $2;
												$$ = $1;
											}
| simple_selectors	{ $$ = $1; }
| solitary_pseudo_element	{ $$ = $1; }
| selector error { $$ = NULL; }
| error { $$ = NULL; }
;

simple_selectors
: simple_selector { $$ = $1; }
| simple_selector simple_selectors	{
										$1->next = $2;
										$$ = $1;
									}
;

/* An "id" is an ID that is attached to an element type
 ** on its left, as in: P#p007
 ** A "solitary_id" is an ID that is not so attached,
 ** as in: #p007
 ** Analogously for classes and pseudo-classes.
 */
simple_selector
: element_name id class pseudo_class {
										$$ = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										$$->element_name = $1;
										$$->id = $2;
										$$->e_class = $3;
										$$->pseudo_class = $4;
										$$->pseudo_element = 0;
										$$->next = NULL;
									 } /* eg: H1.subject */
| element_name id pseudo_class	{
									$$ = (struct selector_t*)
										malloc(sizeof(struct selector_t));
									$$->element_name = $1;
									$$->id = $2;
									$$->e_class = NULL;
									$$->pseudo_class = $3;
									$$->pseudo_element = 0;
									$$->next = NULL;
								}
| element_name class pseudo_class	{
										$$ = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										$$->element_name = $1;
										$$->id = NULL;
										$$->e_class = $2;
										$$->pseudo_class = $3;
										$$->pseudo_element = 0;
										$$->next = NULL;
									}
| element_name id class	{
							$$ = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							$$->element_name = $1;
							$$->id = $2;
							$$->e_class = $3;
							$$->pseudo_class = 0;
							$$->pseudo_element = 0;
							$$->next = NULL;
						}
| element_name id	{
						$$ = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						$$->element_name = $1;
						$$->id = $2;
						$$->e_class = NULL;
						$$->pseudo_class = 0;
						$$->pseudo_element = 0;
						$$->next = NULL;
					}
| element_name class	{
							$$ = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							$$->element_name = $1;
							$$->id = NULL;
							$$->e_class = $2;
							$$->pseudo_class = 0;
							$$->pseudo_element = 0;
							$$->next = NULL;
						}
| element_name pseudo_class	{
								$$ = (struct selector_t*)
									malloc(sizeof(struct selector_t));
								$$->element_name = $1;
								$$->id = NULL;
								$$->e_class = NULL;
								$$->pseudo_class = $2;
								$$->pseudo_element = 0;
								$$->next = NULL;
							}
| element_name	{
					$$ = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					$$->element_name = $1;
					$$->id = NULL;
					$$->e_class = NULL;
					$$->pseudo_class = 0;
					$$->pseudo_element = 0;
					$$->next = NULL;
				}
| solitary_id class pseudo_class	{
										$$ = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										$$->element_name = NULL;
										$$->id = $1;
										$$->e_class = $2;
										$$->pseudo_class = $3;
										$$->pseudo_element = 0;
										$$->next = NULL;
									}	/* eg: #xyz33 */
| solitary_id class	{
						$$ = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						$$->element_name = NULL;
						$$->id = $1;
						$$->e_class = $2;
						$$->pseudo_class = 0;
						$$->pseudo_element = 0;
						$$->next = NULL;
					}
| solitary_id pseudo_class	{
								$$ = (struct selector_t*)
									malloc(sizeof(struct selector_t));
								$$->element_name = NULL;
								$$->id = $1;
								$$->e_class = NULL;
								$$->pseudo_class = $2;
								$$->pseudo_element = 0;
								$$->next = NULL;
							}
| solitary_id	{
					$$ = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					$$->element_name = NULL;
					$$->id = $1;
					$$->e_class = NULL;
					$$->pseudo_class = 0;
					$$->pseudo_element = 0;
					$$->next = NULL;
				}
| solitary_class pseudo_class	{
									$$ = (struct selector_t*)
										malloc(sizeof(struct selector_t));
									$$->element_name = NULL;
									$$->id = NULL;
									$$->e_class = $1;
									$$->pseudo_class = $2;
									$$->pseudo_element = 0;
									$$->next = NULL;
								}/* eg: .author */
| solitary_class	{
						$$ = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						$$->element_name = NULL;
						$$->id = NULL;
						$$->e_class = $1;
						$$->pseudo_class = 0;
						$$->pseudo_element = 0;
						$$->next = NULL;
					}
| solitary_pseudo_class	{
							$$ = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							$$->element_name = NULL;
							$$->id = NULL;
							$$->e_class = NULL;
							$$->pseudo_class = $1;
							$$->pseudo_element = 0;
							$$->next = NULL;
						} /* eg: :link */
;

element_name
: IDENT { $$ = $1; }
;

pseudo_class					/* as in:  A:link */
: LINK_PSCLASS_AFTER_IDENT { $$ = PS_CLASS_LINK; }
| VISITED_PSCLASS_AFTER_IDENT { $$ = PS_CLASS_VISITED; }
| ACTIVE_PSCLASS_AFTER_IDENT { $$ = PS_CLASS_ACTIVE; }
;

solitary_pseudo_class				/* as in:  :link */
: LINK_PSCLASS { $$ = PS_CLASS_LINK; }
| VISITED_PSCLASS { $$ = PS_CLASS_VISITED; }
| ACTIVE_PSCLASS { $$ = PS_CLASS_ACTIVE; }
;

class						/* as in:  P.note */
: CLASS_AFTER_IDENT { $$ = $1; }
;

solitary_class					/* as in:  .note */
: CLASS { $$ = $1; }
;

pseudo_element					/* as in:  P:first-line */
: FIRST_LETTER_AFTER_IDENT	{ $$ = PS_ELEMENT_FIRST_LETTER; }
| FIRST_LINE_AFTER_IDENT	{ $$ = PS_ELEMENT_FIRST_LINE; }
;

solitary_pseudo_element				/* as in:  :first-line */
: FIRST_LETTER	{
					$$ = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					$$->element_name = NULL;
					$$->id = NULL;
					$$->e_class = NULL;
					$$->pseudo_class = 0;
					$$->pseudo_element = PS_ELEMENT_FIRST_LETTER;
					$$->next = NULL;
				}
| FIRST_LINE	{
					$$ = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					$$->element_name = NULL;
					$$->id = NULL;
					$$->e_class = NULL;
					$$->pseudo_class = 0;
					$$->pseudo_element = PS_ELEMENT_FIRST_LINE;
					$$->next = NULL;
				}
;

/* There is a constraint on the id and solitary_id that the
 ** part after the "#" must be a valid HTML ID value;
 ** e.g., "#x77" is OK, but "#77" is not.
 */
id
: HASH_AFTER_IDENT { $$ = $1; }
;

solitary_id
: HASH			{ $$ = $1; }
;

declaration
: property ':' expr prio	{
								$$ = (struct property_t*)
									malloc(sizeof(struct property_t));
								$$->name = $1;
								$$->val = $3;
								$$->important = 1;
								$$->count = 0;
								$$->next = NULL;
							}
| property ':' expr			{
								$$ = (struct property_t*)
									malloc(sizeof(struct property_t));
								$$->name = $1;
								$$->val = $3;
								$$->important = 0;
								$$->count = 0;
								$$->next = NULL;
							}
| error	{ $$ = NULL; }
| /* empty */				{
								$$ = NULL;
							} /* Prevents syntax errors... */
;

prio
: IMPORTANT_SYM	 { }		/* !important */
;

expr
: term					{ $$ = $1; } 
| expr operator term	{
							char *s = (char*) malloc (strlen($1)+strlen($3)+2);
							strcpy(s, $1);
							s[strlen(s)+1] = 0;
							s[strlen(s)] = $2;
							strcat(s, $3);
							free($1);
							free($3);
							$$ = s;
						}
| expr error			{ $$ = $1; }
;

term
: unary_operator value 	{
							char *s = (char*) malloc(strlen($2)+2);
							s[0] = $1;
							s[1] = 0;
							strcat(s, $2);
							free($2);
							$$ = s;
						}
| value { $$ = $1; }
;

value
: NUMBER { $$ = $1; }
| STRING { $$ = $1; }
| PERCENTAGE { $$ = $1; }
| LENGTH { $$ = $1; }
| EMS { $$ = $1; }
| EXS { $$ = $1; }
| IDENT { $$ = $1; }
| hexcolor { $$ = $1; }
| URL { $$ = $1; }
| RGB { $$ = $1; }
; 

/* There is a constraint on the color that it must
 ** have either 3 or 6 hex-digits (i.e., [0-9a-fA-F])
 ** after the "#"; e.g., "#000" is OK, but "#abcd" is not.
 */
hexcolor
: HASH	{ 
			$$ = (char*) malloc (strlen($1)+2);
			sprintf($$, "#%s", $1);
			free($1);
		}
| HASH_AFTER_IDENT	{ 
						$$ = (char*) malloc (strlen($1)+2);
						sprintf($$, "#%s", $1);
						free($1);
					}
;

%%

int yyerror(char *s) {
#if YYDEBUG
	fprintf(stderr, "Error: %s\n", s);
#endif
	return 0;
}

struct selector_list_t* css_parse(const char *buffer, int buf_len) {
	struct selector_list_t *ret = NULL;
	//yydebug = 1;
	init_yylex(buffer, buf_len);
	yyparse(&ret);
	end_yylex();
	return ret;
}

%{

#include <string.h>
#include "css_syntax.h"

#define YY_DECL int yylex(YYSTYPE *lvalp)

%}

%option noyywrap

unicode		\\[0-9a-f]{1,4}
latin1		[¡-ÿ]
escape		{unicode}|\\[ -~¡-ÿ]
stringchar	{escape}|{latin1}|[ !#$%&(-~]
nmstrt		[a-z]|{latin1}|{escape}
nmchar		[-a-z0-9]|{latin1}|{escape}
ident		{nmstrt}{nmchar}*
name		{nmchar}+
d		[0-9]
notnm		[^-a-z0-9\\]|{latin1}
w		[ \t\r\n]*
num		{d}+|{d}*\.{d}+
string		\"({stringchar}|\')*\"|\'({stringchar}|\")*\'

%x COMMENT
%s AFTER_IDENT

%%

"/*"				{BEGIN(COMMENT);}
<COMMENT>[^*]*		/* eat anything that's not a '*' */
<COMMENT>"*"+[^*/]*	/* eat up '*'s not followed by '/'s */
<COMMENT>"*"+"/"        BEGIN(0);
@import				{BEGIN(0); return IMPORT_SYM;}
"!"{w}important			{BEGIN(0); return IMPORTANT_SYM;}
{ident}				{
						BEGIN(AFTER_IDENT);
						lvalp->lexeme = strdup(yytext);
						return IDENT;
					}
{string}			{
						BEGIN(0); 
						lvalp->lexeme = strdup(yytext);
						return STRING;
					}

{num}				{
						BEGIN(0); 
						lvalp->lexeme = strdup(yytext);
						return NUMBER;
					}
{num}"%"			{
						BEGIN(0);
						lvalp->lexeme = strdup(yytext);
						return PERCENTAGE;
					}
{num}pt/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return LENGTH;
						}
{num}mm/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return LENGTH;
						}
{num}cm/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return LENGTH;
						}
{num}pc/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return LENGTH;
						}
{num}in/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return LENGTH;
						}
{num}px/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return LENGTH;
						}
{num}em/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return EMS;
						}
{num}ex/{notnm}			{
							BEGIN(0); 
							lvalp->lexeme = strdup(yytext);
							return EXS;
						}

<AFTER_IDENT>":"link		{return LINK_PSCLASS_AFTER_IDENT;}
<AFTER_IDENT>":"visited	{return VISITED_PSCLASS_AFTER_IDENT;}
<AFTER_IDENT>":"active	{return ACTIVE_PSCLASS_AFTER_IDENT;}
<AFTER_IDENT>":"first-line	{return FIRST_LINE_AFTER_IDENT;}
<AFTER_IDENT>":"first-letter	{return FIRST_LETTER_AFTER_IDENT;}
<AFTER_IDENT>"#"{name}		{
								lvalp->lexeme = strdup(yytext+1);
								return HASH_AFTER_IDENT;
							}
<AFTER_IDENT>"."{name}		{
								lvalp->lexeme = strdup(yytext+1);
								return CLASS_AFTER_IDENT;
							}

":"link				{BEGIN(AFTER_IDENT); return LINK_PSCLASS;}
":"visited			{BEGIN(AFTER_IDENT); return VISITED_PSCLASS;}
":"active			{BEGIN(AFTER_IDENT); return ACTIVE_PSCLASS;}
":"first-line		{BEGIN(AFTER_IDENT); return FIRST_LINE;}
":"first-letter		{BEGIN(AFTER_IDENT); return FIRST_LETTER;}
"#"{name}			{
						BEGIN(AFTER_IDENT);
						lvalp->lexeme = strdup(yytext+1);
						return HASH;
					}
"."{name}			{
						BEGIN(AFTER_IDENT);
						lvalp->lexeme = strdup(yytext+1);
						return CLASS;
					}

url\({w}{string}{w}\)					|
url\({w}([^ \r\n\'\")]|\\\ |\\\'|\\\"|\\\))+{w}\)		{
														BEGIN(0); 
														lvalp->lexeme = 
															strdup(yytext);
														return URL;
													}
rgb\({w}{num}%?{w}\,{w}{num}%?{w}\,{w}{num}%?{w}\)	{
														BEGIN(0);
														lvalp->lexeme = 
															strdup(yytext);
														return RGB;
													}

[-/+{};,#:]			{BEGIN(0); return *yytext;}
[ \t\r]+				{BEGIN(0); /* ignore whitespace */}
\n				{BEGIN(0); /* ignore whitespace */}
\<\!\-\-			{BEGIN(0); return CDO;}
\-\-\>				{BEGIN(0); return CDC;}
\/\/				{BEGIN(0); return CSL;}
.				{fprintf(stderr, "Illegal character (%d)\n", *yytext);}

%%

int init_yylex(const char *buffer, int buf_len) {
	yy_scan_bytes(buffer, buf_len);
}

int end_yylex() {
	yy_delete_buffer(YY_CURRENT_BUFFER);
}

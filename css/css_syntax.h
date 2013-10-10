#ifndef BISON_CSS_SYNTAX_H
# define BISON_CSS_SYNTAX_H

#ifndef YYSTYPE
typedef union {
	char *lexeme;
	char letter;
	struct property_t *property;
	struct selector_t *selector;
	struct selector_list_t *selector_list;
	int pseudo_class;
	int pseudo_element;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
# define	IMPORT_SYM	257
# define	IMPORTANT_SYM	258
# define	IDENT	259
# define	STRING	260
# define	NUMBER	261
# define	PERCENTAGE	262
# define	LENGTH	263
# define	EMS	264
# define	EXS	265
# define	LINK_PSCLASS_AFTER_IDENT	266
# define	VISITED_PSCLASS_AFTER_IDENT	267
# define	ACTIVE_PSCLASS_AFTER_IDENT	268
# define	FIRST_LINE_AFTER_IDENT	269
# define	FIRST_LETTER_AFTER_IDENT	270
# define	HASH_AFTER_IDENT	271
# define	CLASS_AFTER_IDENT	272
# define	LINK_PSCLASS	273
# define	VISITED_PSCLASS	274
# define	ACTIVE_PSCLASS	275
# define	FIRST_LINE	276
# define	FIRST_LETTER	277
# define	HASH	278
# define	CLASS	279
# define	URL	280
# define	RGB	281
# define	CDO	282
# define	CDC	283
# define	CSL	284


#endif /* not BISON_CSS_SYNTAX_H */

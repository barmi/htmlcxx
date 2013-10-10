#ifndef __CSS_PARSER_H__
#define __CSS_PARSER_H__

#define PS_CLASS_NONE 0
#define PS_CLASS_LINK 1
#define PS_CLASS_VISITED 2
#define PS_CLASS_ACTIVE 3

#define PS_ELEMENT_NONE 0
#define PS_ELEMENT_FIRST_LETTER 1
#define PS_ELEMENT_FIRST_LINE 2

#ifdef __cplusplus
extern "C" {
#endif

struct property_t {
	char *name;
	char *val;
	int important;
	int count;
	struct property_t *next;
};

struct selector_t {
	char *element_name;
	char *id;
	char *e_class;
	int pseudo_class;
	int pseudo_element;
	struct property_t *property;
	struct selector_t *next;
};

struct selector_list_t {
	struct selector_t *selector;
	struct selector_list_t *next;
};

struct selector_list_t* css_parse(const char *buffer, int buf_len);
void free_rulesets(struct selector_list_t *rules);

#ifdef __cplusplus
}
#endif

#endif

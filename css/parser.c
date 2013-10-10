#include <stdlib.h>
#include "parser.h"

void free_rulesets(struct selector_list_t *rules) {

	struct selector_list_t *pos = rules;
	while (pos != NULL) {
		struct selector_list_t *tmp = pos;
		struct selector_t *rule = pos->selector;
		struct property_t *property = rule->property;
		while (property != NULL) {
			struct property_t *tmp = property;
			property = property->next;
			tmp->count--;
			if (tmp->count == 0) {
				free(tmp->name);
				free(tmp->val);
				free(tmp);
			}
		}
		while (rule != NULL) {
			struct selector_t *tmp = rule;
			rule = rule->next;
			free(tmp->element_name);
			free(tmp->id);
			free(tmp->e_class);
			free(tmp);
		}
		pos = pos->next;
		free(tmp);
	}

}

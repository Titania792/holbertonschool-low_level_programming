#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *comma = "";
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}

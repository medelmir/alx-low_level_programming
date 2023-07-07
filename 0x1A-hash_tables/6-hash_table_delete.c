#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp, *temp2;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
temp2 = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = temp2;
}
}
free(ht->array);
free(ht);
}

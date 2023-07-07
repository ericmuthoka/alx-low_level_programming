#include "hash_tables.h"
/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table
 *         or NULL if an error occurred
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);

	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * shash_table_set - Add or update an element in the sorted hash table
 * @ht: Sorted hash table to add or update the key/value to
 * @key: Key to add (must not be an empty string)
 * @value: Value of the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node, *prev_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	prev_node = NULL;

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;

	if (prev_node == NULL)
		ht->array[index] = new_node;
	else
		prev_node->next = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		current_node = ht->shead;
		while (current_node->snext != NULL && strcmp(key, current_node->snext->key) >= 0)
			current_node = current_node->snext;

		new_node->sprev = current_node;
		new_node->snext = current_node->snext;

		if (current_node->snext != NULL)
			current_node->snext->sprev = new_node;
		else
			ht->stail = new_node;

		current_node->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with a key
 * @ht: Sorted hash table to look into
 * @key: Key to search for
 *
 * Return: The value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the hash table using the sorted linked list
 * @ht: Sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current_node;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			flag = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the hash table in reverse order using the sorted linked list
 * @ht: Sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int flag = 0;

	if (ht == NULL)
		return;

	current_node = ht->stail;

	printf("{");
	while (current_node)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		flag = 1;
		current_node = current_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a hash table
 * @ht: Hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current_node, *temp_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			temp_node = current_node;
			current_node = current_node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}

	free(ht->array);
	free(ht);
}


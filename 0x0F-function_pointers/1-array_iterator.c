#include <stddef.h>
/**
 * array_iterator - a function that executes a given function
 * @array: array to iterate
 * @size: array size
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: array of integers
 * @max: array of integers
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

#include <string.h>
#include "main.h"
#include <stdlib>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional integer array
 * @width: one dimension
 * @height: second dimension
 * Return: pointer to the 2-d integer array, NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;
	int *data;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	data = (int *) malloc(width * height * sizeof(int));
	if (data == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = data + (i * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0; /* initializes each element of the 2D array to 0 */
		}
	}
	return (grid);
}

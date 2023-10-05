#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2 dimensional array of integer
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer of array of integers
 */

int **alloc_grid(int width, int height)
{
	int **gridO;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridO = malloc(height * sizeof(int *));
	if (gridO == NULL)
	{
		free(gridO);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridO[i] = malloc(width * sizeof(int));
		if (gridO[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridO[i]);
			free(gridO);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridO[i][j] = 0;

	return (gridO);
}

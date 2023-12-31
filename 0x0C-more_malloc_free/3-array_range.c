#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array.
 * if min > max, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int count;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (count = 0; min <= max; count++, min++)
		ptr[count] = min;

	return (ptr);
}

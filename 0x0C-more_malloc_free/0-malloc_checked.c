#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 *
 * Return: pointer to the allocated memory.
 * value is equal to 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

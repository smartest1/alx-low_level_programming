#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated space in memory
 * @str: string.
 *
 * Return: pointer of array of chars
 */

char *_strdup(char *str)
{
	char *strdout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strdout[j] = str[j];

	return (strdout);
}

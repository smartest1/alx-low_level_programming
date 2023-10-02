#include "main.h"

/**
 * _strlen - function to return len of str
 *@s: the parameter received
 *
 * Return: Return int.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

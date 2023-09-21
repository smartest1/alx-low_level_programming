#include "main.h"

/**
 * _strcat - function to concatenates two strings
 * @dest: first input string
 * @src: second input string
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}
	while (i >= 0)
	{
		*(dest +dest_len) = *(src + i);
		if (*(src + i) == '\0')
			break;
		dest_len++;
		i++;
	}
	return (dest);
}

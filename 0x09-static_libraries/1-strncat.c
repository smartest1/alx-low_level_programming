#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (i < n)
	{
		*(dest + dest_len) = *(src + i);
		if (*(src + i) == '\0')
			break;
		dest_len++;
		i++;
	}
	return (dest);
}

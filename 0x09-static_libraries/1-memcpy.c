#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination of memory area
 * @src: source of memory area
 * @n: number of bytes
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(dest + count) =  *(src + count);

	return (dest);
}

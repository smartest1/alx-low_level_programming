#include "main.h"

/**
 * _memset - function that fills memory with a constannt byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: amount of bytes
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(s + count) = b;

	return (s);
}

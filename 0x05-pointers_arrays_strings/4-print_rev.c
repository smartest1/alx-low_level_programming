#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @s: input string
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i] != '\0')
	{
		n++;
		i++;
	}
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}

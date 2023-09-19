#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0, j, n;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		j = i / 2;
		for (; j < i; j++)
		_putchar(str[j]);
	}
	else
	{
		n = (i - 1) / 2;
		for (n++; n < i; n++)
		_putchar(str[n]);
	}
	_putchar('\n');
}

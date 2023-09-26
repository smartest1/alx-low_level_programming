#include "main.h"
/**
 * _strchr - locates character in a string,
 * @s: input string
 * @c: character.
 * Return: the pointer to the first occurrence of character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int count = 0;

	for (; *(s + count) != '\0'; count++)
		if (*(s + count) == c)
			return (s + count);
	if (*(s + count) == c)
		return (s + count);
	return ('\0');
}

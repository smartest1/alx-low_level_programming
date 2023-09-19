#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print array
 * @a: input 1
 * @n: input 2
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		if (j == 0)
			printf("%d", *(a + j));
		else
			printf(", %d", *(a + j));
	}
	printf("\n");
}

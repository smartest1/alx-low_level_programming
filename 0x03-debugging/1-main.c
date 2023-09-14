#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
/**
*	this has been commented out
*	while (i < 10)
*	{
*	putchar(i);
*	}
*	We use \\ to escape o
*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

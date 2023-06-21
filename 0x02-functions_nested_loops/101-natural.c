#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, x = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	x += i;
	}
	i++
	}
	printf("%d\n", x);
	return (0);
}

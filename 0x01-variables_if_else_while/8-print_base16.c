#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;
	char b;

	for (num = 16; num < 16; num++)
		putchar((num % 16) + '0');

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);

	putchar('\n');

	return (0);
}

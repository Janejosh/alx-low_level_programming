#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 * @str: The input
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (x = 0 ; x <= t ; x++)
	{
	if (x % 2 == 0)
	{
	_putchar(str[x]);
	}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_binary - A function that prints the binary representation
 * of a number
 * @n: The binary number to be printed
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int x;
	int i, num = 0;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;
		if (x & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

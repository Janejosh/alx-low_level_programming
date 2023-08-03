#include "main.h"
/**
 * flip_bits - A function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: The first number to be flipped
 * @m: The second number to be flipped
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int xor = n ^ m;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		x = xor >> i;
		if (x & 1)
			count++;
	}
	return (count);
}

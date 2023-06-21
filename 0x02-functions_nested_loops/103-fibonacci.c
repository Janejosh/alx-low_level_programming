#include <stdio.h>
/**
 * main - Prints the sum of even-valued fibonacci numbers, less than 4000000
 *
 * Return: Nothing!
 */

int main(void)
{
	int i = 0;
	long m = 1, n = 2, sum = n;

	while (n + m < 4000000)
	{
	n += m;
	if (n % 2 == 0)
	sum += n;
	m = n - m;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}

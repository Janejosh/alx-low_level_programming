#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - A function that returns 1 if the input integer is
 * a prime number or not
 * @n: The number to be checked
 * Return: 1 if n is a prime number or 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursive
 * @n: The number to be checked
 * @i: Iterator
 * Return: 1 if n is a prime number or 0 if otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

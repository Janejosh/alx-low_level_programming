#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - A function that add the sum of two integer
 * @a: First integer
 * @b: Second integer
 * Return: Sum of integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that finds the differences between
 * two integer
 * @a: First integer
 * @b: Second integer
 * Return: Differences of two integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that finds the product of two integer
 * @a: First integer
 * @b: Second integer
 * Return: Product of the two integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that divides two integer
 * @a: First integer
 * @b: Second integer
 * Return: The division of two integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that returns the division of two integer
 * @a: First integer
 * @b: Second integer
 * Return: Remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

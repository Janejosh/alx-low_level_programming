#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * @a: Integer to swap
 * @b: Integer to swap
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

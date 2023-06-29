#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: Array
 * @n: Numbers of elements in an array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

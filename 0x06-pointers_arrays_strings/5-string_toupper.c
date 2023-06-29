#include "main.h"
/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase
 * @n: The pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
	if (n[a] >= 'a' && n[a] <= 'z')
		n[a] = n[a] - 32;
	a++;
	}
	return (n);
}

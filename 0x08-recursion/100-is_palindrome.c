#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: The string to reverse
 * Return: 1 if a string is palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that returns the lenght of a string
 * @s: The string to calculate the lenght
 * Return: Lenght of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - A function that checks the character recursively for
 * a palindrome
 * @s: The string to be checked
 * @i: Iterator
 * @len: The lenght of a string
 * Return: 1 if it is palindrome, 0 if otherwise
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

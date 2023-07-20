#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - A function that prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: Number of strings passed to the function
 * @...: The variable number of strings to be printed
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
	s = va_arg(strings, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

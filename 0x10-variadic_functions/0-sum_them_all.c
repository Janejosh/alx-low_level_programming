#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all
 * its parameters
 * @n: The number of parameters to be checked
 * @...: The variable number
 * Return: 0 if n == 0, otherwise sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that prints a name
 * @name: The name to be checked
 * @f: The pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

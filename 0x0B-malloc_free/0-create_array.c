#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars, and
 * initializes it with a specific char
 * @size: The size of array
 * @c: The character to be assign
 * Return: A pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

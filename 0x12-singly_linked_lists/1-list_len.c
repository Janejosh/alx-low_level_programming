#include "lists.h"
/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list
 * @h: The linked list_t list
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}

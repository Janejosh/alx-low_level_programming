#include "lists.h"
/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list
 * @h: The listint_t list to be checked
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

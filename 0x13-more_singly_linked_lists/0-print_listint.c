#include "lists.h"
/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: The listint_t list to be checked
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}	

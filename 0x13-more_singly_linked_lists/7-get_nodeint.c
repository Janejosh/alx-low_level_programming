#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list
 * @head: The first linked list node
 * @index: The index of the node
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int a = 0;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}

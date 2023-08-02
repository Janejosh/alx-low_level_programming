#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * index of a listint_t linked list
 * @head: The pointer to the first linked listint_t list
 * @index: The index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *temp = *head;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (x < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		x++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}

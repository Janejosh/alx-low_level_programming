#include "lists.h"
/**
 * reverse_listint - A function that reverses a listint_t linked list
 * @head: The pointer to the first linked listint_t list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

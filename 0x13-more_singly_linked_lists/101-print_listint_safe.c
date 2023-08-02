#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t count_looped_listint_len(const listint_t *head);

/**
 * count_looped_listint_len - A function that counts the number of nodes
 * @head: The pointer to the first linked listint_t list
 * Return: 0
 */

size_t count_looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: The pointer the first linked listint_t list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = count_looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

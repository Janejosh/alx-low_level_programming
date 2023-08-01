#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: The first linked list node
 * Return: The sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

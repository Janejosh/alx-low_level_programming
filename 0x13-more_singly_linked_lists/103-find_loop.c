#include "lists.h"
/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: The pointer to the first linked list to find
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (fast);
		}
	}
	return (NULL);
}

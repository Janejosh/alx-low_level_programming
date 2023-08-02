#include "lists.h"
/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: The pointer to the first linked listint_t list
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int i;
	size_t len = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}	

#include "lists.h"
/**
 * free_list - A function that frees a list_t list
 * @head: The first linked list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}

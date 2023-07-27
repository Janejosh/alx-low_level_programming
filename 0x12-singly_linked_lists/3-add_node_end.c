#include "lists.h"
/**
 * add_node_end - A function that adds a new node at the
 * end of a list_t list
 * @head: The first linked list
 * @str: The string to be stored
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node, *new_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new_node->len = i;
	current_node = *head;
	new_node->next = NULL;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}

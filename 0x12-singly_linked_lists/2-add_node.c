#include "lists.h"
/**
 * add_node - A function that adds a new node at the beginning
 * of a list_t list
 * @head: The first linked list
 * @str: The string added to the node
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[i])
		i++;
	temp->len = i;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}


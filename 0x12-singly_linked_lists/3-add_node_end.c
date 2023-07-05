#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - a function adds a node to linked list from the end node
 * @head: a double pointer to head node
 * @str: a pointer to string
 *
 * Return: return the pointer to the new node on success, NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;

	current = *head;
	if (str == NULL || head == NULL)
		return (NULL);
	if (current == NULL)
	{
		(*head) = add_node(head, str);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current = add_node(&(current->next), str);
	}
	return ((*head));
}

/**
 * add_node - a function adds a node to linked list from head node
 * @head: a double pointer to head node
 * @str: a pointer to string
 *
 * Return: return the pointer to the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *s;
	unsigned int i;

	if (str == NULL || head == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (i = 0; s[i]; i++)
		;
	newnode->len = i;
	newnode->str = s;
	newnode->next = (*head);
	(*head) = newnode;
	return ((*head));
}

#include "lists.h"
/**
 * list_len - a function returns number of nodes in linked list
 * @h: a head pointer to the linked list
 *
 * Return: Return the number of nodes on success
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *current = (list_t *)h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - a function prints all elements in the list
 * @h: a head pointer of the list
 *
 * Return: return the size of list on success
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

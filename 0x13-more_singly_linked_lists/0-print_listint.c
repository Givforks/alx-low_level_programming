#include "lists.h"
#include <stdio.h>
/**
 * print_listint - elements pf a listint_t list prints all
 * @h: list_t list pointer nodes of number
 * Return: number of nodes in list_t list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes = nodes + 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

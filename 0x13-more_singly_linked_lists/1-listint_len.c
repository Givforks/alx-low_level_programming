#include "lists.h"
#include <stdio.h>
/**
 * listint_len - numbers of elements left
 * @h: pointer to head listint_t list
 * Return: elements in the listint_t list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes = nodes + 1;
		h = h->next;
	}

	return (nodes);
}

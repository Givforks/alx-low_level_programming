#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - alx_school code checking
 * @h: na,e of list
 * Return: nodes
 *
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

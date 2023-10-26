#include "lists.h"
/**
 * free_listint - listint_t list freedom
 * @head: pointer to the head listint_t list freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

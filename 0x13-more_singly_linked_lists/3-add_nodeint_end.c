#include "lists.h"
/**
 * add_nodeint_end - new nodes at te end od a listint
 * @head: pointer to the address of head of listint_t list
 * @n: integer node filled
 * Return: failed function - NULL, owise _ address of new element
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

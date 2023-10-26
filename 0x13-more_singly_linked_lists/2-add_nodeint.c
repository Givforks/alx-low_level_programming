#include "lists.h"
/**
 * add_nodeint - add a node at start
 * @head: pointer to address of the head
 * @n: int for the node to fill
 * Return: if the functions fails - Null, owise - new element address
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

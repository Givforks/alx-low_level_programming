#include "lists.h"
/**
 * find_listint_loop - loop in
 * @head: pointer to head
 * Return: no loop - NULL, owise - loop start
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}


		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

		return (NULL);
}

#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - a modulus that return the length
 * @s: s is the alphabet
 *
 * Return: t value
 */

int _strlen(const char *s)
{
	int t = 0;

	while (s[t] != '/0')
	{
		t++;
	}
	return (t);
}

/**
 * add_node -  new node at start
 * @str: insert intp\o element
 * @head: list list_t
 *
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		/* not to expect any value */
		return (NULL);
	add->str = strdup(str);


	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

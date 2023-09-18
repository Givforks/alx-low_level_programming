#include "main.h"
/**
 * puts_half - this modulus prints half of a string
 * n = (lenght of the string -1) / 2
 * if odd lenght
 * @str: input
 * Return: half of input
 * using memory locator
 */

void puts_half(char *str)
{
	int v, n, longi;

	longi = 0;

	for (v = 0; str[v] != '\0'; v++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (v = n; str[a] != '\0'; v++)
		_putchar(str[v]);
	_putchar('\n');
}

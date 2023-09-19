#include "main.h"
/**
 * _puts - prints a string with a new by th standard output
 * @str: the string to output
 * using the double qoute
 */
int _putchar(char)
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

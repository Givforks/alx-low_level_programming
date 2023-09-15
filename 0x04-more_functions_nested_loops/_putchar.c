#include "main.h"
#include <unistd.h>

/**
 * _putchar - print letter c to output
 * @c: the letter to display
 * Return: successful 1
 * Error: -1 is returned and errorNumber is set on standard
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

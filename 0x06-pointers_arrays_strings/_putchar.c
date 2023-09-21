#include <unistd.h>
/**
 * _putchar - c to standard output
 * @: the letter to print
 *
 * Return: on (completed) 1.
 * on error, -1 is retured, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

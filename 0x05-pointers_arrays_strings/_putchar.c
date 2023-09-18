#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to output
 * @c: the letter to print
 * Return: on completed 1
 * On error -1 is returned and error number is set appprox
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

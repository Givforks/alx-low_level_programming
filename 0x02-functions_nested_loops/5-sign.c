#include "main.h"
/**
 * print_sign - print the sign of a number correctly
 * @v: number to find
 * Return: 1 for positive number, -1 for negative number or zero for others
 */
int print_sign(int v)
{
	if (v > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (v < 0)
		{
		_putchar(45);
		return (-1);
		}
	else
		{
		_putchar(48);
		return (0);
		}
}

#include "main.h"
/**
 * print_line - draw a straight line to the terminal
 * @n: the number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	if (n <= n)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

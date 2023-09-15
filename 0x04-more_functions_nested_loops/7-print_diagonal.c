#include "main.h"
/**
 * print_diagonal - draws a line on the sandbox terminal
 * @n: number of times the char \ should be printed
 *
 * using _putchar
 */
void print_diagonal(int n)

{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i =0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

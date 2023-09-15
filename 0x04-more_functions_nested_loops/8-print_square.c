#include "main.h"
/**
 * print_square - print a square acompany by a new line
 * @size of the square
 * using vapid return but a diagram
 */

void Print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		}
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_triangle - in new line print triangle before
 * @size: size of the triangle
 * using the # symbol
 */
void Print_triangle(int size)

{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i<= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
 * more numbers - more numbers printed
 *
 * output 14 times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}

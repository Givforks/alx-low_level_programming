#include "main.h"
/**
 * print_number - integer output
 * @y: printed int
 * using _putchar
 */

void print_number(int y)
{
	unsigned int nl;
	if (y < 0)
	{
		nl = -y;
		_putchar('-');
	}
	else
	{
		nl = y;
	}

	if (nl / 10)
	{
		print_number(nl / 10);
	}
	_putchar((nl % 10) + '0');
}


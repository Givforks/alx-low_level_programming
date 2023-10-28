 #include "main.h"
#include <string.h>
/**
 * print_binary - binary == of a decimal number
 * @n: binary number to print
 *
 */

void print_binary(unsigned long int n)
{
	int t, count = 0;
	unsigned long int current;

	for (t = 63; t >= 0; t = t - 1)
	{
		current = n >> t;

	if (current & 1)
	{
		_putchar('1');
		count = count + 1;
	}
	else if (count)
		_putchar('0');
}
if (!count)
_putchar('0');
	}

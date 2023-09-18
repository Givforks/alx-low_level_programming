#include "main.h"
/**
 * puts2 - modulus should print only letter out
 * starting with first one
 * @str: standard i
 * Return: display
 * using diplay characters
 */
void puts2(char *str)
{
	int x;
	int longi = 0;
	int z = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	z = longi - 1;
	for (x = 0; x <= z; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}

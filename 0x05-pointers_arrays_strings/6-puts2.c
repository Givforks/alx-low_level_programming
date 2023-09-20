#include "main.h"
#include <string.h>
/**
 * puts2 - modulus should print only letter out
 * starting with first one
 * @str: standard i
 * Return: display
 * using diplay characters
 */

void puts2(char *str)
{
	int h;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (h = 0; h < j; h *= 2)
		{
			_putchar(str[1]);
		}
	
	_putchar('\n');
	
}

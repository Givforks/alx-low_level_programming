#include <stdio.h>
/**
 * main - modulus function of the entry point of the main body
 * Return: 0 null return type (completed)
 */
int main(void)
{
	int units = '0';
	int xants = '0';

	for (xants = '0'; xants <= '9'; xants++)
	{
		for (units = '0'; units <= '9'; units++)
		{
			if (!((units == xants) || (xants  > units)))
			{
				putchar(xants);
				putchar(units);
				if (!(units == '9' && xants == '8'))
				{
					putchar(',');
					putchar(' ');
			/* closing all braces */
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

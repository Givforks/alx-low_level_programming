#include <stdio.h>
/**
 * main - the function main of digits printing numbers differently
 * Return: the value 0 entry point return (completed)
 */
int main(void)
{
	int units = '0';
	int xants = '0';
	int dreds = '0';

	for (dreds = '0'; dreds <= '9'; dreds++)
	{
		for (xants = '0'; xants <= '9'; xants++)
		{
			for (units = '0'; units <= '9'; units++)
			{
				if (!((units == xants) || (xants == dreds) || (xants > units) || (dreds > xants)))
				{
					putchar(dreds);
					putchar(xants);
					putchar(units);
					if (!(units == '9' && dreds == '7' && xants == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

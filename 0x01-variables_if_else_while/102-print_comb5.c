#include <stdio.h>
#include <stdlib.h>
/**
 * main -  functional program that prints all possible modulus
 * Return: 0 return null (completed)
 */
int main(void)
{
	int f;
	int g;

	for (f = '0'; f < 100; f++)
	{
		for (g = '0'; g < 100; g++)
		{
			if (f < g)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((g / 10) + 48);
				putchar((g % 10) + 48);
				if (f != 98 || g != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	/* expecting combination of different two numbers */
	putchar('\n');
	return (0);
}


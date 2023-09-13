#include "main.h"
/**
 * jack_bauer - output every minutes of JB day
 * Return: ... thicking
 */
void jack_bauer(void)
{
	int f, g, h, j;

	for (f = 0; f <= 2; f++)
	{
		for (g =0; g <= 9; g++)
		{
			if ((f <= 1 && g <= 9) || (f <= 2 && g <= 3))
			{
				for (h =0; h <= 5; h++)
				{
					for (j = 0; j <= 9; j++)
					{
						_putchar(f + '0');
						_putchar(g + '0');
						_putchar(58);
						_putchar(h + '0');
						_putchar(j + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

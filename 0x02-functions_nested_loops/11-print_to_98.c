#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - all natural display output
 * @p: start of the output
 * Return; 0 null (completed)
 */
void print_to_98(int p)
{
	if (p <= 98)
	{
		for (; p <= 98; p++)
		{
			if (p == 98)
			{
				printf("%d", p);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", p);
			}
		}
	}
	else
	{
		for (; p >= 98; p--)
		{
			if (p == 98)
			{
				printf("%d", p);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", p);
			}
		}
	}
}

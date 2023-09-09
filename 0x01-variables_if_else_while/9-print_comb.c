#include <stdio.h>
/**
 * main - the function of the entry point program as modulus
 * Return 0 return type display (completed)
 */
int main(void)
{
	int v;

	for (v = 0; v < 10; v++;)
	{
		putchar(v + '0');
		if (v < 9)
		{
			putchar(',');
			putchar(' ');
		}
	/* single quotes for comma and space while v++ increment */
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main - A program contains all entry point modulus function
 * Return: 0 zero return screen (completed)
 */
int main(void)
{
	char h;

	int M;

	h = 'a';
	M = '0';
	while
		(M < 10)
		{
			putchar(M + '0');
			M++;
		}
	while
		(h <= 'f')
		{
			putchar(h);
			h++;
		}
	putchar('\n');
	return (0);
}


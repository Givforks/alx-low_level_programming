#include <stdio.h>
/**
 * main - An entry point program main function that prints upper_lower
 * Return: 0 value return (completed)
 */
int main(void)
{
	char t;
	char G;
	/* declear t,G value and use loop with putchar */
	t = 'a';
	G = 'A';
	while
		(t <= 'z')	{
			putchar(t);
			t++;
		}
	while
	(G <= 'Z')	{
		putchar(G);
		G++;
	}
	putchar('\n');
	return (0);
}

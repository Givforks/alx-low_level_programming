#include "main.h"
/**
 * print_array - the modulus will print n elements of any array
 * @a: array name
 * @n: the number of element to be printed in the array
 * Return: a and n standard input
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}

	if (p == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}

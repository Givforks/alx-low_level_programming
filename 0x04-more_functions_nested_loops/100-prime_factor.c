#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * Return: 0
 * main - function
 * @n-
 * @max
 */
int main (void)
{
	long n;
	long int i;
	long int max;

	n = 612852475143;
	max = 1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2 )
		max = n;

	printf("%ld\n", max);

	return (0);
}

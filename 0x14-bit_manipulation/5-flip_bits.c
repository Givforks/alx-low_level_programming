#include "main.h"
/**
 * flip_bits - bits to change counts from anothe number
 * @m: number second
 * @n: frist number
 * Return: number bits to change
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (t = 63; t >= 0; t = t - 1)
	{
		current = exclusive >> t;
		if (current & 1)
			count = count + 1;
	}

	return (count);
}

#include "main.h"
/**
 * set_bit - 1 to given index at a bit sets
 * @index: 1 to set bit index
 * @n: pointer change number
 * Return: -1 for bad, 1 for good
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
/* 1ul is an unsigned long version of 1. */
	*n = ((1UL << index) | *n);
	return (1);

}

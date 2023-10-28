#include "main.h"
/**
 * get_bit - bit at an index decimal return number
 * @index: bit index
 * @n: searching number
 * Return: bit value
 *
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index) & 1;

	return (val_bit);
}

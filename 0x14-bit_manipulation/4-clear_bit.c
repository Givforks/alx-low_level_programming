#include "main.h"
/**
 * clear_bit - 0 bit value sets
 * @index: clear bit of index
 * @n: pointer number to change
 * Return: -1 for bad, 1 for good
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* 1UL just means 1 (unsigned long) */
	/*and the width of which is architectural specific*/
	*n = (~(1UL << index) & *n);
	/* if N-th bit is 1, then clear it to 0 */
	 /* and if it is 0 then leave it unchanged */
	 /* Bitwise AND operator ( & ) use to clear a bit of integral */
	return (1);
}

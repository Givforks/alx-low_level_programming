#include "main.h"
/**
 * get_endianness - checks if a machine is small or big endian
 * Return: 1 for small, 0 for big
 *
 */

int get_endianness(void)
{
	unsigned int t = 1;

	char *c = (char *) &t;
/* In char[] you are assigning it to an array which is not a variable*/
	return (*c);
}

#include "main.h"
/**
 * binary_to_uint - unsigned int binary number convert
 * @b:string binary number presence
 * Return:  converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int val_dec = 0;

	if (!b)
		return (0);

	for (t = 0; b[t]; t = t + 1)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);

		val_dec = 2 * val_dec + (b[t] - '0');
	}

	return (val_dec);
}

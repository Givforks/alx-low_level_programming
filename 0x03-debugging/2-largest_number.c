#include "main.h"

/**
 * largest_number - the 3 largest number returns
 * @j: first integer
 * @k: second integeir
 * @l: third integer
 * Return: largest number
 */

int largest_number(int j, int k, int l)
{
	int largest;

	if (j > k && j > l)
	{
		largest = j;
	}
	else if (j > k && l > j)
	{
		largest = l;
	}
	else if (k > l)
	{
		largest = k;
	}
	else
	{
		largest = l;
	}

	return (largest);
}

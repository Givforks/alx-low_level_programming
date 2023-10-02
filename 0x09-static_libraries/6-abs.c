#include "main.h"
/**
 * _abs - absolute value of an int
 * @q: number to be examined
 * Return: value of zero if its absolute
 */
int _abs(int q)
{
	if (q < 0)
	{
		int absVal;

		absVal = q * -1;
		return (absVal);
	}
	return (q);
}

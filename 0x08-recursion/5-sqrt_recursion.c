#include "main.h"
/* main function */
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of number
 *
 * Return: the resulting square root
 */

int_sqrt_recursion(int n)
{
if (n < 0)

return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - find the natural recurses
 * number of square root
 * @i: iterator
 * @n: calculate number of sqrt of i++
 *
 * Return: sqrt resulting root
 */

int actual_sqrt_recursion(int n, int i)
		{
		if (i * i > n)
		return (-1);
		if (i * i == n)
		return (i);
		return (actual_sqrt_recursion(n, i + 1));
		}

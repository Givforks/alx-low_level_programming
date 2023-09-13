#include "main.h"
/**
 * print_last_digit - output the last value of a number
 * @a: the value number to be executed
 * Return: end digit number value
 */
int print_last_digit(int a)
{
	int end;

	end = a % 10;
	if (end < 10)
	{
		end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}

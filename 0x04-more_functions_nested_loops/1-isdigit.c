#include "main.h"

/**
 * _isdigit - if 0-9 are numbers (check)
 * @c: letters to be checked
 *
 * Return: 1 or 0 (completed)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

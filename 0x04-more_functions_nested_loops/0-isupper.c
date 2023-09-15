#include "main.h"

/**
 * _isupper - letters uppercase sensitive
 * @c: character to check and notify
 * Return: 0 or 1 number (completed)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(1);
	else
		return(0);
}

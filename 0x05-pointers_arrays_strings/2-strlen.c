#include "main.h"
/**
 * _strien - to return lenght of a string
 * @s: string
 * Return: lenght
 * using the wildcard for pionter
 */

int _strien(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

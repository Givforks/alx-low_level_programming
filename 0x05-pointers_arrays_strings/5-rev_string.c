#include "main.h"
/**
 * rev_string - string with a reverses
 * @s: the string input
 * Return: the string in reverse
 * using the double quote
 */

void rev_string(char *s)
{
	int counter = 0;
	char rev = s[0];
	int f;

	while (s[counter] != '\0')
		counter++;
	for (f = 0; f < counter; f++;)
	{
		counter--;
		rev = s[f];
		s[f] = s[counter];
		s[counter] = rev;
	}
}

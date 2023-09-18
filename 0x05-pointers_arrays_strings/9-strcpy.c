#include "main.h"
/**
 * char *_strcpy - modulus that will copy string pointers
 * @src: copy from
 * @dest: copy to
 * Return: (string)
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int v = 0;

	while (*(src + b) != '\0')
	{
		b++;
	}

	for ( ; v < b ; v++)
	{
		dest[v] = src[v];
	}
	dest[b] = '\0';
	return (dest);
}

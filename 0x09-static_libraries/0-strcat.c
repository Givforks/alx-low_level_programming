#include "main.h"
/**
 * _strcat - two modulus that concatenates strings
 * @dest:string pointer destination
 * @src: string pointer source
 * Return: destination string to pointer
 * using c
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string;
	int z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}

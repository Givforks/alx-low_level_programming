#include "main.h"
#include <string.h>
/**
 * _strncat - two strings that concatenates a modulus
 * @dest: string pointer address
 * @src: string pointer home
 * @n:  concatenated number of bytes
 *
 * Return: string pointer home
 */

char *_strincat(char *dest, char *src, int n)
{
	int string_length;
	int g;
	/* g is a counter for n bytes of src to be concatenated */
	/* string_length = length of home string */

	string_length = 0;
	while (dest[string_length] != '\0')
{
	string_length++;
}
	for (g = 0; g < n && src[g] != '\0'; g++, string_length++)
{
	dest[string_length] = src[g];
}
	dest[string_length] = '\0';
	return (dest);
}

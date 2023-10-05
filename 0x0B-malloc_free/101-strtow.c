#include <stdlib.h>
#include "main.h"
/**
 * count_word - to count the number of words in a str modulus
 * @s: evaluate the str
 * Return: no of str
 *
 */
	int count_word(char *s)
{
	int flag;
	int c;
	int w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1, w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: (completed) pointer to an array or error NULL
 *
 */
char **strtow(char *str)
{
	char **matrix,  *tmp;
	int i, k, len, words, c, start, end;

	k = 0, len = 0, c = 0;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

			matrix = (char **) malloc(sizeof(char *) * (words + 1);
					if (matrix == NULL)
					return (NULL);

					for (i = 0; i <= len; i++)
					{
					if (str[i] == '' || str[i] == '\0')
					{
					if (c)
					{
					end = i;
					tmp = (char *) malloc(sizeof(char) * (c + 1));
					if (tmp == NULL)
					return (NULL);
					while (start < end)
					*tmp++ = str[start++];
					*tmp = '\0';
					matrix[k] = tmp - c;
					k++;
					c = 0;
					}
					}
					else if (c++ == 0)
						start = i;
					}

	matrix[k] = NULL;

	return (matrix);
}

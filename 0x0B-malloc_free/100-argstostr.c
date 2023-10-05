#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: input int
 * @av:\pointer array double
 *
 * Return: 0 null (complete)
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int n;
	int r, l;

	r = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

			for (i = 0; i < ac; i++)
			{
				for (n = 0; av[i][n]; n++)
					l++;
			}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}

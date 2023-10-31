#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - print posix stdio text file
 * @letters: print numbers of letters
 * @filename: filename
 *
 * Return: 0, numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pf;
	ssize_t re_ad, wri_te;

	char *buffer;

	if (!filename)
	{
		return (0);
	}

	pf = open(filename, O_RDONLY);
	if (pf == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	re_ad = read(pf, buffer, letters);
	if (re_ad == -1)
	{
		free(buffer);
		close(pf);
		return (0);
	}

	wri_te = write(STDOUT_FILENO, buffer, re_ad);
	if (wri_te == -1)
	{
		free(buffer);
		close(pf);
		return (0);
	}
	close(pf);
	return (re_ad);
}

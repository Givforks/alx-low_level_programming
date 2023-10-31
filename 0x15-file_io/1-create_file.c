#include "main.h"
#include <stddef.h>
/**
 * create_file - file text content
 * @text_content: NULL terminating str file write
 * @filename: file create name
 * Return: -1 bad, 1 good
 *
 */

int create_file(const char *filename, char *text_content)
{
	int pfile;
	int result = 1;
	int readn = 0;

	if (!filename)
		return (-1);
	pfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (pfile == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[readn])
			readn = readn + 1;
		result = write(pfile, text_content, readn);
	}
	if (result == -1)
		return (-1);
	close(pfile);
	return (1);
}

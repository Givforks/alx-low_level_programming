#include "main.h"
#include <string.h>
/**
 * append_text_to_file - text content file create
 * @text_content: Null terminating str file write
 * @filename: create file name
 * Return: -1 for bad, 1 for good
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int pf;
	int wri_te;

	if (!filename)
		return (-1);

	pf = open(filename, O_WRONLY | O_APPEND);
	if (pf == -1)
		return (-1);

	if (!text_content)
	{
		close(pf);
		return (1);
	}

	wri_te = write(pf, text_content, strlen(text_content));
	if (wri_te == -1 || wri_te != strlen(text_content))
	{
		close(pf);
		return (-1);
	}

	close(pf);
	return (1);
}


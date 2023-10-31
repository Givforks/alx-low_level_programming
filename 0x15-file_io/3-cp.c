#define BUF_SIZE 1024

#include "main.h"
/**
 * main - main body
 * @argv: pointer to the array of arguments
 * @argc: arguments numbers
 *
 * Return: 0 null (completely)
 */
int main(int argc, char **argv)
{
	int pp1, pp2, set1, set2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FRLENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	pp2 = open(argv[1], O_RDONLY);
	error_99(pp2, buffer, argv[1]);
	pp1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(pp1, buffer, argv[2]);

	do {
		set1 = read(pp2, buffer, BUF_SIZE);
		if (set1 == 0)
			break;
		error_98(set1, buffer, argv[1]);
		set1 = write(pp1, buffer, set1);
		error_99(set2, buffer, argv[2]);
	}

	while (set2 >= BUF_SIZE);
	set1 close(pp1);
	error_100(set1, buffer);
	set1 = close(pp2);
	error_100(set1, buffer);
	free(buffer);
	return (0);
}


/**
 * error_98 - error 98 check
 * @pp1: check value
 * @argv: argument
 * @buffer: buffer
 *
 */

void error_98(int pp1, char *buffer, char *argv)
{
	if (pp1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * error_99 - error 99 check
 * @pp1: check value
 * @buffer: buffer
 * @argv: argument
 *
 */

void error_99(int pp1, char *buffer, char *argv)
{
	if (pp1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100 - error 100 check
 * @pp1: value check
 * @buffer: buffer
 *
 */

void error_100(int pp1, char *buffer)
{
	if (pp1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close pf %i\n", pp1);
		free(buffer);
		exit(100);
	}
}

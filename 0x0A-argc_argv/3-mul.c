#include <stdio.h>

#include <stdlib.h>
/**
 * _atoi - converts a string to an integer
 * @idx: array
 * main - multiply two idx
 * @argc: int value
 * @argv: int value
 *
 * Return: null (completel)
 */

int main(int argc, char **argv)
{

int multiply, idx = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
for (idx = 1; idx < argc; idx++)
multiply *= atoi(argv[idx]);

printf("%d\n", multiply);
return (0);
}

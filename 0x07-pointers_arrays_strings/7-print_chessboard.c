#include "main.h"
#include <string.h>
/**
 * print_chessboard - Entry point
 * @*a: array
 *
 * Return: Always 0 null (completed)
 */

void print_chessboard(char (*a)[8])

{
int _putchar(char c);
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
	_putchar(a[i][j]);
_putchar('\0');
}
}

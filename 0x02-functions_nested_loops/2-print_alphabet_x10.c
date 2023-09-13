#include "main.h"
/**
 * print_alphabet_x10 - create alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
char le;
int n;

n = 0;

while (n < 10)
{
for (le = 'a'; le <= 'z'; le++)
{
_putchar(le);
}
_putchar('\n');
n++;
}

}

#include <stdio.h>
/*
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (complete)
 */

int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}

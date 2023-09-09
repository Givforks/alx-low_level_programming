#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - The function main is the entry point of the program
 * Return: Always 0 (completed)
 */

int main(void)
{
		int n;

		/*
		 * n will store a different value every time
		 * This program will assign a random number
		 */
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);
		return (0);
}

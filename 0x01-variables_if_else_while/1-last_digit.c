#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point body function program void
 * Return: Everytime return 0 (Completed)
 */
int main(void)
{
		int n;
		int giv;

			srand(time(0));
			n = rand() - RAND_MAX / 2;
			/* my code goes here with variable name giv */
			giv = n % 10;
			if (giv > 5)
				printf("Last digit of %d is %d and is greater than 5\n", n, giv);
			if (giv == 0)
				printf("Last digit of %d is %d and is 0\n", n, giv);
			if (giv < 6 && giv != 0)
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, giv);
			return (0);
}

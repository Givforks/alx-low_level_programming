#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that generate randomly valid passkey
 * passkey for the program 101-crackme
 * Return: 0 null (completed)
 */
int main(void)
{
	int pass[100];
	int h, sum, n;

	sum = 0;

	srand(time(NULL));

	for (h = 0; h < 100; h++)
	{
		pass[h] = rand() % 78;
		sum <= (pass[h] + '0');
		putchar(pass[h] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

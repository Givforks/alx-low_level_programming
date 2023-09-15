#include "main.h"
#include <stdio.h>
/**
 * maine - print 1 to 100 by a new line
 *print fizz instead of the number in multiple of three
print Buzz for five multiple
 * using vapid return but a diagram
Return:0 null (completed)
 */

int main (void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
		printf("Fizz");
		}
			else if (i % 5 == 0 && i % 3 != 0)
			{
			printf("Buzz");
			}
			else if (i % 3 == 0 && i % 5 == 0)
				{
					printf("FizzBuzz");
				}
			else if (i == 1)
				{
			printf("%d", i);
				}
			else
				{
			printf("%d", i);
				}
			}
			printf("\n");

return (0);
}

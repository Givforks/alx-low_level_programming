#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int c;

        printf("Infinite loop incoming :(\n");

        c = 0;

        while (c < 10)
        {
                putchar(c);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

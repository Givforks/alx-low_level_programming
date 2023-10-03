#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0 (Success)
 *
 */

int check_num(char *str)
{
/*Declaring variables*/
unsigned int count;

count = 0;
while (count < strlen(str))
	/*count string*/

{
if (!isdigit(str[count]))
	/* check str for digits */
{
	return (0);
}

count++;
}
return (1);
}

/**
 * main - print the name of the modulus
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: null (0) completed
 */

int main(int argc, char *argv[])

{

/* Declaring variables */
int count;
int str_to_int;

int sum = 0;
count = 1;

while (count < argc)
	/*Goes through the whole array*/
{
if (check_num(argv[count]))

{
str_to_int = atoi(argv[count]);
/*ATOI --> convert string to int*/
sum += str_to_int;
}

/*Condition of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

count++;
}
printf("%d\n", sum);
/*print sum*/

return (0);
}

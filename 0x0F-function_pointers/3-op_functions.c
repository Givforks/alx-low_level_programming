#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: a and b sum
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - remains of two number
 * @a: first number
 * @b: second number
 * Return: the the remaining value of a and b
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple times of two number
 * @a: first number
 * @b: second number
 * Return: the product
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - difference of two number
 * @a: first number
 * @b: second number
 * Return: quotient
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of two number
 * @a: first number
 * @b: second number
 * Return: the remainder of the division
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include"3-calc.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * op_add - function that adds
 * @a: first integer
 * @b: 2nd integer
 *
 * Returns - sum of the 2 int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that carries out subtraction
 * @a: first integer
 * @b: 2nd integer
 *
 * Returns - difference of 2 integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that carries out multiplication
 * @a: first integer
 * @b: 2nd integer
 *
 * Return: multiplication of 2 integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that carries out division
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: division of 2 integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that returns te modulus
 * @a: 1st integer
 * @b: 2nd intege
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

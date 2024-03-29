#include<stdarg.h>
#include"variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: number of parameters passed to the function
 * @... : a variable number of parameters to calculate sum
 *
 * Return - sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

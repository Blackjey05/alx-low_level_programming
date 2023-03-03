#include"main.h"

/**
 *print_array - prints elements of an array of integers
 *@a: array
 *@n: number of elements
 *
 *Return: nothin
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		print_array(*a);
		if (i < n - 1)
		{
			putchar(', ');
		}
	}
	putchar('\n');
}

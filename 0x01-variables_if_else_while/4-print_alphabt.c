#include<stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		if (lo != 'e' && lo != 'q')
			putchar(lo);
	}
	putchar('\n');

	return (0);
}

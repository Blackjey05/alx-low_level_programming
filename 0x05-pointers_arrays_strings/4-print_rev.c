#include"main.h"
#include<string.h>

/**
 * print_rev- prints a string, in reverse
 * @s: character to be reversed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}

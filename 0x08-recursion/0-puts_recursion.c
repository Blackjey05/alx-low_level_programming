#include<stdio.h>
#include"main.h"

/**
 *_puts_recursion- a function that prints a string
 *@s: character string
 *_putchar - a function that prints character
 */
void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}

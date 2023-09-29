#include<stdio.h>
#include"main.h"

void _print_rev_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}
	_print_rev_recursion(s - 1);
	_putchar(*s);
}

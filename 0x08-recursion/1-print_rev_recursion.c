#include<stdio.h>
#include"main.h"

void _print_rev_recursion(char *s)
{
	if (s == NULL || *s == '\0'){
		_putchar('\n');
		return;
	}
	_putchar(s[-1]);
	_print_rev_recursion(s - 1);
}

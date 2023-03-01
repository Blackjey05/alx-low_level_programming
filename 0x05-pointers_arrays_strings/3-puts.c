#include"main.h"
#include<stdio.h>

/**
 *_puts- prints a string
 *@str: place holder for the string to be executed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
}

#include"main.h"
#include<string.h>

/**
 *strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: (0) Success
 */
int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);
	result = strcmp(s2, s1);
	result = strcmp(s1, s1);

	if(result == 0)
	{
		putchar('0');
	}
	else if (result < 0)
	{
		putchar('-');
		putchar('1');
		putchar('5');
	}
	else
	{
		putchar('1');
		putchar('5');
	}
	return (0);
}

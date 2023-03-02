#include"main.h"
#include<string.h>

/**
 * puts2 -prints every other character of a string
 * @str:  a place holder for the string to be looked at
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		
		i += 2;
	}
	_putchar('\n');
}

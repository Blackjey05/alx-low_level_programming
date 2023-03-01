#include"main.h"
#include<string.h>

/**
 * puts2 -prints every other character of a string
 * @str - a place holder for the string to be looked at
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

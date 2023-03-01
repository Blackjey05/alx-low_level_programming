#include"main.h"
#include<string.h>

/**
 * puts2 - a function that prints every other character of a string, starting with the first character, followed by a new line
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

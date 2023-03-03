#include<string.h>
#include"main.h"

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int half_length = length_of_the_string / 2;
	int n = (length_of_the_string - 1) / 2;

	if (length_of_the_string % 2 == 0);
	{
		_putchar(half_length);
	}
	else 
	{
		_putchar(n);
	}
	_putchar('\n');
}

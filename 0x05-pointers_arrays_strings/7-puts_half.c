#include"main.h"
#include<string.h>

void puts_half(char *str)
{
	int length = strlen(str);
	int half_length = length / 2;
	
	if (length % 2 != 0) half_length += 1;

	str = str + half_length;
	_putchar(*str);
}

#include"main.h"
#include<string.h>

/**
 * rev_string - a function that reverses a string
 * @s: place holder for the character
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for(i = 0; i < length/2; i++)
	{
		char temp = s[i];
		s[i] = s[length-i-1];
		s[length-i-1] = temp;
	}
}

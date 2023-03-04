#include"main.h"
#include<string.h>

/**
 *strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: If s1 < s2, give a -ve
 	  If s1 == s2, 0
	  If s1 > s2, give +ve
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

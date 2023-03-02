#include"main.h"
#include<string.h>

/**
 *srncat - concatenates two strings
 *@dest - place holder for the string
 *@@src - the second part of the string to be added
 *@i - integer value
 *i
 *Return: (0) Success
 */
char *_strncat(char *dest, char *src, int n)
{
	s1[sizeof(s1) - 1] = '\0';
	strncat(dest, src, 1);

	putchar(*dest) '\n';

	s1[sizeof(s1) - 1] = '\0';
	strncat(dest, src, 1024);

	putchar(*dest);

	return (0);
}

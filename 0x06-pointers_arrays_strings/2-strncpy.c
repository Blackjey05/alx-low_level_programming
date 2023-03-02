#include"main.h"
#include<string.h>

/**
 *_strncpy - copies a string
 *@dest - where the string is to be copied to
 *@src: holds characters for execution
 *
 *Return: (0) Success
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, 5);
	dest[5] = '\0';
	
	putchar(*dest);

	return (0);
}

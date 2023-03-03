#include"main.h"
#include<string.h>

/**
 *strcpy - copies a string
 *@dest - place holder for the string to be copied
 *@src - string
 *
 *Return: (0) Success
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	putchar(*dest);

	return (0);
}

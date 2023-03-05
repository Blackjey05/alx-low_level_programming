#include"main.h"
#include<string.h>

/**
 *strcpy - copies a string
 *@dest - place holder for the string to be copied
 *@src - string
 *
 *Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

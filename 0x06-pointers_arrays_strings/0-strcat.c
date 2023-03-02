#include"main.h"
#include<string.h>

/**
 *_strcat - concenates two strings
 *@dest:place holder for the entire string
 *@src:holds the part to be added
 *
 *Return: (0) Success
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	putchar(*dest);

	return (0);
}

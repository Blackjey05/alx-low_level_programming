#include"main.h"
#include<string.h>

/**
 *_strcat - concenates two strings
 *@dest:place holder for the entire string
 *@src:holds the part to be added
 *
 *
 *Return: a pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

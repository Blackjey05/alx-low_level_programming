#include"main.h"
#include<string.h>

/**
 *srncat - concatenates two strings
 *@dest - place holder for the string
 *@@src - the second part of the string to be added
 *@i - integer value
 *
 *Return: (0) Success
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src [i] != '\0'; i++)
		dest [dest_len + i] = src [i];
	dest[dest_len + i] = '\0';

	return (0);
}

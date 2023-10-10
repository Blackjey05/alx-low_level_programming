#include"main.h"
#include<stdlib.h>

/**
 *create_array - function that creates an array of characters
 *@size: the size of the array
 *@c: te character to fill in the array
 *
 *Return - on success The array filled and NULL on error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if(size == 0)
		return(NULL);

	s = malloc(size * sizeof(char));

	if(s == NULL)
		return(NULL);

	for(i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return(s);
}

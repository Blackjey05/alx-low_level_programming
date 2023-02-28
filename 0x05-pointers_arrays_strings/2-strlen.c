#include"main.h"
#include <stdio.h>
#include<string.h>

/**
 *_strlen -calculates the length of a string
 *
 * Return: Always 0
 */
int _strlen(char *str)
{
	 int length = 0;
	 while (*str != '\0')
	 {
 		 length++;
 		 str++;
	 }
  return length;
}

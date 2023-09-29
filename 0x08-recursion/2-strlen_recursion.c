#include<stdio.h>
#include"main.h"

/*_strlen_recursion- a function that prints the length of a string
 *@s:placeholder for string
 *
 *Return:1 on success and 0 when string is done.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	return 1 + _strlen_recursion(s + 1);
}

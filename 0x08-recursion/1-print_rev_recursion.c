#include<stdio.h>
#include"main.h"
/*_print_rev_recursion: prints the string in reverse
 *@s- placeholder for string
 *_putchar:prints character
 */

void _print_rev_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

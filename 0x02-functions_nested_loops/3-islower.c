#include"main.h"

/**
 * _islower - checks if a charcter is in lowercase
 *@c: character
 *
 *Return: 1 if the letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}

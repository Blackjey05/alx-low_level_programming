#include"main.h"
#include<stdio.h>

/**reset_to_98- set the integer to 98
 * @n- a pointer the integer we want to set to 98
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n=98;
}

/**
 * main -  updates the value it points to to 98
 *
 * Return: Always 0.
 */
int main(void)
{
	int p;
	int *n;

	n=&p;
	p=420;
	reset_to_98(n);
	printf("Value of 'p' after the call:p=%d\n",p);
	return(0);
}

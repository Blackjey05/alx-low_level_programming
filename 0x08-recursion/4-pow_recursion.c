#include<stdio.h>
#include"main.h"

/*pow_recursion - function that returns the power of a number
 *@x: integer
 *@y: place value of ower
 *
 * Return : (0) on success and 1 on success
 */
int _pow_recursion(int x, int y)
{
	if(y < 0)
		return (-1);
	if(y <= 1)
		return (1);
	return(x * x) + _pow_recursion(x, y -1);
}

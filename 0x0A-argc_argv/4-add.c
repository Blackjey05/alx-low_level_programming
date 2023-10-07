#include<stdio.h>
#include<stdlib.h>

/**
 *main - entry point of the program
 *@argc: count of number of arguments passed to the program
 *@argv: pointer to the string of arguments passed to the program
 *
 * Return: (0) on success and (1) on error
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	
	printf("%d\n", sum);
	return(0);
}

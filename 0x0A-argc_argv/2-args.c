#include<stdio.h>
#include<stdlib.h>

/**
 *main - entry point of the program
 *@argc: number of arguments passed to a program
 *@argv: pointer to a string of arguments passed to the program
 *
 * exit: EXIT_SUCCESS on success
 */
int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	exit(EXIT_SUCCESS);
}

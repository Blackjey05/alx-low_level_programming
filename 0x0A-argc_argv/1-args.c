#include<stdio.h>
#include<stdlib.h>

/*
 *main - entry point of the program
 *@argc: count of arguments supplied to the program
 *@argv: array of pointers to te string
 *
 *exit: EXIT_SUCCESS on success a
 */
int main(int argc, char **argv)
{
	int i;

	for(i = 0; i < argc;)
		i++;
	i -= 1;
	printf("%d\n", i);

	(void)**argv;

	exit(EXIT_SUCCESS);
}

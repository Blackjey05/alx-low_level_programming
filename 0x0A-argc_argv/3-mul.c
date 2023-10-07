#include<stdio.h>
#include<stdlib.h>

/**
 *main - entry point of the program
 *@argc: number of arguments passed to the program
 *@argv: pointer to string of arguments passed to the program
 *
 * exit: EXIT_SUCCESS on success
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	/*printf("%d\n", argc);*/
	if(argc <= 2)
	{
		printf("Error");
		return(1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = x * y;
	}
	printf("%d\n", mul);
	exit(EXIT_SUCCESS);
}

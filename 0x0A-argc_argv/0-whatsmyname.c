#include<stdio.h>
#include<stdlib.h>
/*
 *main - entry point to the function
 *@argc: count of arguments passed to the program
 *@argv: array of pointers to the string
 *EXIT_SUCCESS on success
 */
int main(int argc, char *argv[])
{
	if(argc >= 1)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}

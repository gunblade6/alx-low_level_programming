#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: the name of the program
 */
int main(int argc, char *argv[])
{	
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	if(argc > 1) 
	{
		printf("%s\n", argv[1]);
	}

	return (0);
}


#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	count++;

	printf("%d\n", count - 1);

	return (0);
}


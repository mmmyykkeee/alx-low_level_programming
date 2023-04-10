#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
       	{
	printf("%d: %s\n",i, argv[i]);
	}

		return (0);
}

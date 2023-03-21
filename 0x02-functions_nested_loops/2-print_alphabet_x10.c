#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}


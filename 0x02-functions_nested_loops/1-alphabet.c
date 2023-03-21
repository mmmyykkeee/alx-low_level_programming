#include <stdio.h>

/**
 * print_alphabet - prints the lowercase of the alphabet followes by a new line
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}

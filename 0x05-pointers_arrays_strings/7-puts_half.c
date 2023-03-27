#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: A pointer to the string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

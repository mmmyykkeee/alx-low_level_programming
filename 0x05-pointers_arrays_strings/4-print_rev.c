#include "main.h"

/**
 * print_rev - check the code
 *@s: is the pointer to the string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*(s + l) != '\0')
		l++;
	for (i = l -1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}

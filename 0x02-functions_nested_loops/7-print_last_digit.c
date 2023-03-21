#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;
	_putchar('0' + ld);

	return (ld);
}

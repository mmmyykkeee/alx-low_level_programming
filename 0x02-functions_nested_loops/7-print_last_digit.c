#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to check
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld;

	if (n == INT_MIN)
		ld = 8;
	else
	{
	if (n < 0)
		n = -n;
	ld = n % 10;
	}
	_putchar(ld + '0');

	return (ld);
}

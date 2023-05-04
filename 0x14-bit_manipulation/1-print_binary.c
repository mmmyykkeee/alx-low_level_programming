#include "main.h"
#include <stdio.h>


/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int _putchar(char c);


	unsigned long int mask = 1;
	unsigned int bit_count = 0;

	while ((mask << 1) <= n)
		mask <<= 1;

	while (mask != 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
		bit_count++;
	}

	if (bit_count == 0)
		_putchar('0');
}

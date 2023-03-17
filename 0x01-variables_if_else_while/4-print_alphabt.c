#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lett = 'a';

	while (lett <= 'z')
	{
		if (lett != 'e' && lett != 'q')
			putchar(lett);
		lett++;
	}

	putchar('\n');

	return (0);
}

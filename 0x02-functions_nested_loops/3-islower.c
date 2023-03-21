#include "main.h"

/**
 * _islower - prints if the number is lower than 1
 *
 * c -integer
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

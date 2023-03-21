#include "main.h"

/**
 * _islower - prints if the number is lower than 1
 *
 * @c -integer
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

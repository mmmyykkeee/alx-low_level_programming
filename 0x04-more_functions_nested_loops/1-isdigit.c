#include "main.h"

/**
 * _isdigit - checks if c is a digit or otherwise
 *
 * @c: is the character
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

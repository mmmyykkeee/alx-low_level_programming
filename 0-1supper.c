#include "main.h"

/**
 * _isupper - is the function
 * @c: is the value
 * Return: returns the value
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

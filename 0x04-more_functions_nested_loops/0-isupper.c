#include "main.h"

/**
 * _isupper - is the function of the program
 * @c: is the value of the program
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

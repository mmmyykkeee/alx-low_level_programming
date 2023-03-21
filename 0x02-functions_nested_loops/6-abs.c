#include "main.h"

/**
 * _abs - the prototype function
 *
 * @n: is the subject value
 *
 * Return: gives 0 or 1 of the value
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

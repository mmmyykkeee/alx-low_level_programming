#include "main.h"

/**
 * main - entry point
 *
 * _islower - prints if the number is lower than 1
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if ( c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

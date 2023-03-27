#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: value
 * @b: value *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}


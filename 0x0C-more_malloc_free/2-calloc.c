#include "main.h"
#include <stdlib.h>

/**
 * calloc_checked - Allocates memory for an array using calloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 * If calloc fails, the calloc_checked
 */
void *calloc_checked(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}


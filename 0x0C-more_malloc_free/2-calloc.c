#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using calloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         If nmemb or size is 0, returns NULL
 *         If calloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = calloc(nmemb, size);
    if (ptr == NULL)
        return (NULL);

    return (ptr);
}

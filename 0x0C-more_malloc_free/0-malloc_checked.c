#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 * If malloc fails, causes normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

	if (ptr == NULL) {
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}

	return ptr;
}

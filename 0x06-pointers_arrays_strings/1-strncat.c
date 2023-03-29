#include "main.h"

/**
 * _strncpy - is the string to copy
 * @dest: the destination string
 * @src: the string to concatenate
 * @n: is the number of the value
 *
 * Return: returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return dest;
}

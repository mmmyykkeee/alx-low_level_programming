#include "main.h"

/**
 * _strcat - will join the strings
 * @dest: the destination string
 * @src: the string source
 *
 * Return: gives the pointer results
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return dest;
}

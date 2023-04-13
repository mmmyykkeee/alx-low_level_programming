#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the number of bytes from s2 to concatenate
 *
 * Return: a pointer to a newly allocated
 * containing s1 followed by the first
 * If the function fails, returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = s1 ? strlen(s1) : 0;
	unsigned int s2_len = s2 ? strlen(s2) : 0;

		if (n >= s2_len)
	{
		n = s2_len;
	}

	result = malloc(sizeof(char) * (s1_len + n + 1));

    	if (result == NULL)
	{
		return (NULL);
	}

	if (s1)
	{
		strncpy(result, s1, s1_len);
	}

	if (n > 0 && s2)
	{
		strncat(result + s1_len, s2, n);
	}

	result[s1_len + n] = '\0';

	return (result);
}

#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 0 if s1 and s2 are equal, negative value if s1 is less than s2,
 *         positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
	if (s1[i] == '\0')
	return (0);
	i++;
	}

	return (s1[i] - s2[i]);
}

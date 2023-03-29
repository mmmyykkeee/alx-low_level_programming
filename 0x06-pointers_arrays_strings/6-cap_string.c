#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Input string.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
	s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' ||
	s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
	s[i - 1] == '{' || s[i - 1] == '}')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 'a' - 'A';
	}
	}
	i++;
	}
	return (s);
}

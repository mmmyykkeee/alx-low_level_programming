#include "main.h"

/**
 * leet - is the value to compare
 * @str: is the value
 */

char *leet(char *str)
{
	int i, j;
	char leet[] = "aAeEoOtTlL4433007711";

	for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; j < 10; j++)
		{
	if (str[i] == leet[j])
		{
			str[i] = leet[j + 10];
			break;
		}
	}
	}

	return str;
}

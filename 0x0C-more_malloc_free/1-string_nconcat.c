#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: max length
 * Return: cc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *cc;

	k = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		k++;

	cc = malloc(sizeof(char) * (k + 1));

	if (cc == NULL)
		return (NULL);
	j = 0;
	for (i = 0; s1[i] != '\0'; i++, j++)
		cc[j] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n; i++, j++)
		cc[j] = s2[i];

	cc[j] = '\0';
	return (cc);



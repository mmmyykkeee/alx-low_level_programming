#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _puts - Prints a string to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
	while (*s)
		putchar(*s++);
}

/**
 * print_error - Prints an error message to stderr
 */
void print_error(void)
{
	_puts("Error\n");
	exit(98);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2, len_res, carry, n1, n2, res;
	int *result;

	if (argc != 3)
	print_error();

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	for (i = 0; i < len1; i++)
	if (!_isdigit(argv[1][i]))
		print_error();

	for (i = 0; i < len2; i++)
	if (!_isdigit(argv[2][i]))
		print_error();

	len_res = len1 + len2;
	result = calloc(len_res, sizeof(int));
	if (result == NULL)
		return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
	carry = 0;
	n1 = argv[1][i] - '0';

	for (j = len2 - 1; j >= 0; j--)
	{
		n2 = argv[2][j] - '0';
		res = n1 * n2 + result[i + j + 1] + carry;
		carry = res / 10;
		result[i + j + 1] = res % 10;
	}

	if (carry)
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len_res - 1 && result[i] == 0)
		i++;

	while (i < len_res)
		putchar(result[i++] + '0');

	putchar('\n');

	free(result);

	return (0);
}

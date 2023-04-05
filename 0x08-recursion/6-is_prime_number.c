#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive helper function to check for prime
 *
 * @n: number to check
 * @div: current divisor to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_helper(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2 + 1)
		return (1);
	return (is_prime_helper(n, div + 1));
}

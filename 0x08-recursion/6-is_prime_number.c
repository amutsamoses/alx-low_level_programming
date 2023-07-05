#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - wrapper function to check for prime numbers
 *
 * @n: input number
 *
 * Return: 1 if prime, 0 if not else recurse
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if input integer is a prime number
 *
 * @n: input number
 * @i: iterator
 *
 * Return: return 1 if prime and 0 otherwise
 */

int actual_prime(int n, int i)
{
if (i == 1)
	return (1);
if (n % i == 0 && i > 0)
	return (0);
return (actual_prime(n, i - 1));
}

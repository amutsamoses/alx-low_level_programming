#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number 
 *
 * @n: number to calculate the square root of
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	int square = 2;
if (n < 0)
	return (-1);
else if (n == 0 || n == 1)
	return (n);
return (isqrt(n, square));
}

/**
 * isqrt - recurses to find the natural square root of a number
 *
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */

int isqrt(int n, int i)
{
if (i * i > n)
	return (-1);
if (i * i == n)
	return (i);
return (isqrt(n, i + 1));
}

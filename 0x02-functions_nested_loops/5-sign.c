#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: function parameter
 *
 * Return: 1 if it prints +
 * 0 if it print 0
 * and -1 if it prints -
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
return (0);
}
else
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}
}

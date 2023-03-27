#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: store the string
 * Return: always 0
 */

void print_rev(char *s)
{
int i;
int count = 0;
for (i = 0 ; s[i] != '\n' ; i++)
	count++;
for (i = count ; i >= 0 ; i--)
	_putchar(s[i]);
_putchar('\n');
}

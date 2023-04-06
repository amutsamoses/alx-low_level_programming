#include "main.h"

/**
 * _strlen_recursion - prints a string
 *
 * @s: string to be measure
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
int longit = 0;

if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}

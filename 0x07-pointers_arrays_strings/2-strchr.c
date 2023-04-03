#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @s: string
 * @c: character to be located
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
	return (&s[i]);
}
return (0);
}

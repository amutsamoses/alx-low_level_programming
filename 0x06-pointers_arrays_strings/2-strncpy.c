#include "main.h"

/**
 * *_strncpy - copies the string pointed to by src
 *
 * @dest: pointer to the buffer
 * @src: pointer to the source string
 * @n: length of src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0 ; i < n ; i++)
	dest[i] = src[i];
return (dest);
}

#include "main.h"

/**
 * get_endianness -a function that checks endianness
 *
 * Return: 0 if an error occurs, 1 if it works
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

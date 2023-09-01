#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * at given index
 *
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if it works, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 88)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

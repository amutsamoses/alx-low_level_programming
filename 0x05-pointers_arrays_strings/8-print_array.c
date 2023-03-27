#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of array
 * @a: pointer to an integer
 * @n: number of elements of an array
 * Return: always 0
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i == (n - 1))
{
break;
}
else
{
printf(", ");
}
}
printf("\n");
}

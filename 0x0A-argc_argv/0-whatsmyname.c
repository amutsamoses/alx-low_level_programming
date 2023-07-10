#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program and the main function
 *
 * @argc: number of command line arguments
 * @argv: array of character pointers listing all arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}

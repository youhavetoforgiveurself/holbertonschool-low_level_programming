#include <stdio.h>
#include "main.h"

/**
 * main - Counts the command-line arguments passed to the program
 * @argc: Number of arguments including the program name
 * @argv: Array of command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

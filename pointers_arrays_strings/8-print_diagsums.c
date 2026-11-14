#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Number of rows and columns
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagonal1;
	int diagonal2;

	diagonal1 = 0;
	diagonal2 = 0;

	for (i = 0; i < size; i++)
	{
		diagonal1 += a[i * size + i];
		diagonal2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", diagonal1, diagonal2);
}

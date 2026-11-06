#include <stdio.h>

/**
 * main - Prints single-digit numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}

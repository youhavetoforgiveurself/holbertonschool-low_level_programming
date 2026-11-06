#include <stdio.h>

/**
 * main - Prints hexadecimal digits in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char letter;

	n = 0;
	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	letter = 'a';
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

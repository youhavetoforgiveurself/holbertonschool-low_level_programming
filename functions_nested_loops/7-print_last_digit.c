#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of an integer
 * @n: Integer to check
 *
 * Return: The last digit of n as a positive integer
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
		digit = -digit;
	_putchar('0' + digit);
	return (digit);
}

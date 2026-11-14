#include "main.h"

/**
 * _atoi - Converts the first number in a string to an integer
 * @s: String to convert
 *
 * Return: Converted integer, or 0 if no digits are found
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int number;

	i = 0;
	sign = 1;
	number = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		number = number * 10U + (unsigned int)(s[i] - '0');
		i++;
	}

	if (sign == -1)
		return (-number);
	return (number);
}

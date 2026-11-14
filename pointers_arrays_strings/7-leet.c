#include "main.h"

/**
 * leet - Encodes a string using 1337 replacements
 * @s: String to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *digits = "4433007711";
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == letters[j])
				s[i] = digits[j];
			j++;
		}
		i++;
	}
	return (s);
}

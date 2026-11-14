#include "main.h"

/**
 * _strspn - Counts initial characters contained in accept
 * @s: String to examine
 * @accept: Accepted characters
 *
 * Return: Number of matching initial characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
			j++;
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (i);
}

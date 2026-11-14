#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first character matching any in accept
 * @s: String to search
 * @accept: Characters to search for
 *
 * Return: Pointer to first match, or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

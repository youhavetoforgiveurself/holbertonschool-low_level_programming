#include "main.h"

/**
 * _strncat - Appends up to n characters of src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to append
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}

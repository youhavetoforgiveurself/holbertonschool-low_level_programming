#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets all bytes to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *array;
	size_t total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if ((size_t)nmemb > (size_t)-1 / size)
		return (NULL);

	total = (size_t)nmemb * size;
	array = malloc(total);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		array[i] = 0;

	return (array);
}

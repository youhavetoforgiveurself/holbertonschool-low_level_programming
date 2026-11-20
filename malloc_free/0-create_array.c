#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array initialized with a character
 * @size: Number of characters to allocate
 * @c: Character to initialize the array with
 *
 * Return: Pointer to the array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

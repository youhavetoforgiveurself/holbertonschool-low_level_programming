#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: First integer in the array
 * @max: Last integer in the array
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	size_t count, i;

	if (min > max)
		return (NULL);

	count = (size_t)max - (size_t)min;
	if (count >= (size_t)-1 / sizeof(int))
		return (NULL);
	count++;
	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		array[i] = min;
		if (min < max)
			min++;
	}
	return (array);
}

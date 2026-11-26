#include "function_pointers.h"

/**
 * int_index - Finds the first array element matching a comparison
 * @array: Array of integers to search
 * @size: Number of elements in the array
 * @cmp: Function used to test each element
 *
 * Return: Index of the first match, or -1 if none is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - Creates an allocated copy of a string
 * @str: String to copy
 *
 * Return: Pointer to the copy, or NULL on failure
 */
static char *copy_string(char *str)
{
	char *copy;
	size_t len = 0, i;

	while (str[len] != '\0')
		len++;
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		copy[i] = str[i];
	return (copy);
}

/**
 * new_dog - Creates a new dog with copies of its name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = copy_string(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = copy_string(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}

#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *new_dog - check the code
 * @name: blllll
 * @age: blllll
 * @owner: blllll
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}

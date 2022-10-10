#include <limits.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * *init_dog - check the code
 * @d: blllll
 * @name: blllll
 * @age: blllll
 * @owner: blllll
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

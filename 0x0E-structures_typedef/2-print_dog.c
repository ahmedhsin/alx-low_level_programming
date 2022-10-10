#include "main.h"
#include "dog.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *print_dog - check the code
 * @d: blllll
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n"
	, d->name, d->age, d->owner);
}

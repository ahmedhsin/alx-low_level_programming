#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
/**
 * *print_dog - check the code
 * @d: blllll
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
		return;
	}
	if (d->name == NULL)
		d->name == "nil";
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n"
	, d->name, d->age, d->owner);
}

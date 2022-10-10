#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * dog_t - typedef for dog;
 */
typedef struct dog dog_t;
/**
 * struct dog - dog structure
 * @name: f
 * @owner: f
 * @age: f;
 *
 */
struct dog
{
	char *name, *owner;
	float age;
};

#endif

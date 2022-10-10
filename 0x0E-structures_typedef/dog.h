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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

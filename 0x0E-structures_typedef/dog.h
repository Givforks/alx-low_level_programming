#include <stdlib.h>
#include "dog.h"
#define DOG_H
#ifndef DOG_H
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initial
 * @name: name to initial
 * @age: age to initial
 * @owner: owner to initial
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
{

if (d == NULL)
	d = malloc(sizeof(struct dog));

struct dog
{
d->name = char name;
d->age = float age;
d->owner = char owner;
};

}

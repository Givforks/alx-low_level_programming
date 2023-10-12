#define DOG_H
#ifndef DOG_H

/**
 * struct dog - initializes a variable of type struct dog
 * @*ptr: pointer to struct dog to initial
 * @name: name to initial
 * @age: age to initial
 * @owner: owner to initial
 */

struct dog
{
	char name;
	float age;
	char owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif

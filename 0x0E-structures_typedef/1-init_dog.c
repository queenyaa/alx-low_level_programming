#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable of type dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*check if pointer to dog struct is not NULL*/
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

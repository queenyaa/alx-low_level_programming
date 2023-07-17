#include "dog.h"

/**
 * print_dog - prints details of a struct dog object
 * @d: element of dog
 */
void print_dog(struct dog *d)
{
	/*check if pointer to dog struct is not NULL*/
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

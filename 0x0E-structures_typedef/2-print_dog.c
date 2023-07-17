#include "dog.h"

/**
 * print_dog - prints details of a struct dog object
 * @d: element of dog
 */
void print_dog(struct dog *d)
{
	/*check if pointer to dog struct is not NULL*/
	if (d != NULL)
	{
		/*print name*/
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else printf("Name: (nill)\n");

		/*print age*/
		printf("Age: %.1f\n", d->age);

		/*print owner*/
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

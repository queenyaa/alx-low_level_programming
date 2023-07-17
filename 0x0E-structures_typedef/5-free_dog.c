#include "dog.h"

/**
 * free_dog - free memory allocated to dog_t
 * @d: struct dog  to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/*free dynamically allocated strings*/
	free(d->name);
	free(d->owner);

	/*free memory allocated for dog_t*/
	free(d);
}

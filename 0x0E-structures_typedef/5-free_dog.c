#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - a function that frees dogs (structure dog_t)
 *@d: Variable
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d->name);
		free(d->owner);
		free(d);
}

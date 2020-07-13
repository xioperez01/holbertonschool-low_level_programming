#include "dog.h"
#include <stdio.h>

/**
 *print_dog - a function that prints a struct dog
 *@d: Variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((d->name) == NULL)
		printf("Name: (nil)\n");

	if ((d->name) != NULL)
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if ((d->owner) == NULL)
		printf("Owner: (nil)\n");

	if ((d->owner) != NULL)
		printf("Owner: %s\n", d->owner);
}

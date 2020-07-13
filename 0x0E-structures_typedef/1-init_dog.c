#include "dog.h"
#include <stdio.h>

/**
 *init_dog - initialize a variable of type struct dog
 *@d: variable to initialize
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return ('\0');
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}

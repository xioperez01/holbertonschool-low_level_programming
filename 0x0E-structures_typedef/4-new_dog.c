#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog -  a function that creates a new dog
 *@name: new name
 *@age: new age
 *@owner: new owner
 *Return: pointer with a new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	p->name = _strdup(name);

	if ((p->name) == NULL && name)
		return (free(p), NULL);

	p->age = age;

	p->owner = _strdup(owner);

	if ((p->owner) == NULL && owner)
		return (free(p->name), free(p), NULL);

	return (p);
}
/**
 *_strdup - function returns a pointer to a new string which is a
 *duplicate of the string str
 *@str: string
 *Return: NULL if str = NULL or returns a pointer to the duplicated string
 *It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *str2;

	if (str == '\0')
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == '\0')
	{
		return ('\0');
	}

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}

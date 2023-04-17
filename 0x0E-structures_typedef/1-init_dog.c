#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: struct dog
 * @name: string for name
 * @age: age param
 * @owner: ower param
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

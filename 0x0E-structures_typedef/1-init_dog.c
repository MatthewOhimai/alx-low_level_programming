#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes variable of type struct Dog
 * @d: pointer to struct dog to Initialize
 * @name: Name to Initialize
 * @age: Age to Initialize
 * @owner: Owner to Initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

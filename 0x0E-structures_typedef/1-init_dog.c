#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to a struct dog variable
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

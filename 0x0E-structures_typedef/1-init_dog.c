#include "dog.h"

/**
 * init_dog - Defines a dog's attributes
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * @d: New data type
 *
 * Description: This structure represents essential information about a dog,
 * including its name, age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;   /* Set the dog's name */
		d->age = age;     /* Set the dog's age */
		d->owner = owner; /* Set the dog's owner */
	}
}

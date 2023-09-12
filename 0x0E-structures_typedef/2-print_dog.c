#include "dog.h"

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to a struct dog
 *
 * This function prints the name, age, and owner of a dog struct. If any of
 * these values are NULL, "(nil)" is printed instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		return;
	}

	if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: (nil)", d->name, d->age);
		return;
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}


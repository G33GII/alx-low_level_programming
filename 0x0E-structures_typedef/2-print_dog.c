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

	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}


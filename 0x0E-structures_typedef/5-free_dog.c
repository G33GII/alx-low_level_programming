#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 * This function takes a pointer to a dog structure and frees the memory
 * allocated for the name, owner, and the structure itself.
 * @d: Pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);    /* Free memory for the dog's name */
		free(d->owner);   /* Free memory for the dog's owner */
		free(d);          /* Free memory for the dog structure itself */
	}
}

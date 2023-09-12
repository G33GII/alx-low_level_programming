#include "dog.h"


/**
 * new_dog - creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: pointer to the new dog_t structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocate memory for new dog */
	dog_t *n_x;

	n_x = malloc(sizeof(dog_t));
	if (!n_x) /* If allocation fails, return NULL */
		return (NULL);

	/* Allocate memory for dog's name */
	n_x->name = malloc(strlen(name) + 1);
	if (!n_x->name) /* If allocation fails, free n_x and return NULL */
	{
		free(n_x);
		return (NULL);
	}
	/* Copy the name to the new dog structure */
	strcpy(n_x->name, name);

	/* Assign the age to the new dog structure */
	n_x->age = age;

	/* Allocate memory for the owner's name */
	n_x->owner = malloc(strlen(owner) + 1);
    /* If allocation fails, free previous allocations and return NULL */
	if (!n_x->owner)
	{
		free(n_x->name);
		free(n_x);
		return (NULL);
	}
	/* Copy the owner's name to the new dog structure */
	strcpy(n_x->owner, owner);

	/* Return the pointer to the new dog structure */
	return (n_x);
}

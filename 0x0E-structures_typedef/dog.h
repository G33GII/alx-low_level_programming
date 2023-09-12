#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct dog - Defines a dog's attributes
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: This structure represents essential information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;      /* Dog's name */
	float age;       /* Dog's age in years */
	char *owner;     /* Dog's owner's name */
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif

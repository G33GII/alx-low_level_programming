#ifndef DOG_H
#define DOG_H

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

#endif

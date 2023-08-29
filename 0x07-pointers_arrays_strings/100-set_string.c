#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
    /* Update the value of the double pointer 's' to point to the same */
     /* memory location as the 'to' pointer */
	    *s = to;
}

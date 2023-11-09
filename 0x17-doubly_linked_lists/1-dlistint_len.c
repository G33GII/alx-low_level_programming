#include "lists.h"

/**
 * main - check the code
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
    int x = 0;

    for (; h; h = h->next)
        x++;

    return (x);

}

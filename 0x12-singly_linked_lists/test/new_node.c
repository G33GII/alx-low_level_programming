#include <stdio.h>
#include <stdlib.h>



typedef struct list_t
{
    char* str;
    int length;
    struct list_t *next;
} list_t;


void insert_node(list_t **head, char*str, int x);
/**
 * 
 * 
*/
int main()
{
    list_t *head = NULL;
    list_t tail = {"ga_za", 5, NULL};
    head = &tail;

    insert_node(&head, "Sa_rah", 6);

    return (0);
}




void insert_node(list_t **head, char *s, int x)
{
    int dx = 0, ln = 0;
    list_t *new;
    new = (list_t*)malloc(sizeof(list_t));
    if (!new)
        return;

    while (s[dx] != '\0')
        dx++;

    new->str = malloc(sizeof(char) * dx);
    if (!new->str)
    {
        free(new);
        return;
    }

    for (dx = 0; s[dx]; dx++)
        new->str[dx] = s[dx];

    new->length = x;
    new->next = *head;

    *head = new;
}



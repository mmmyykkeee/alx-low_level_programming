#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a linked list and sets the head to NULL.
 * @h: The address of the head of the linked list.
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next;
    size_t count = 0;

    if (h == NULL)
        return (0);

    while (*h != NULL)
    {
        count++;
        current = *h;
        next = current->next;
        *h = next;

        if (next >= current)
        {
            free(current);
            break;
        }
        free(current);
    }

    *h = NULL;
    return (count);
}

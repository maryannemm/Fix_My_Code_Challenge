#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    dlistint_t *next;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = current->next;
        if (current->next)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    for (i = 0; current && i < index - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return (-1);

    next = current->next->next;
    free(current->next);
    current->next = next;
    if (next)
        next->prev = current;
    return (1);
}


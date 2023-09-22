#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    if (head == NULL || str == NULL)
        return (NULL);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str); // Duplicate the string
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str); // Get the length of the string
    new_node->next = *head;     // Set the next pointer to the current head

    *head = new_node; // Update the head to point to the new node

    return (new_node);
}

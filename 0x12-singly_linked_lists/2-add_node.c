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
    list_t *new_node;
    size_t str_len;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);

    str_len = 0;

    while (str[str_len])
        str_len++;

    new_node->len = str_len;
    new_node->next = *head;
    *head = new_node;

    return (*head);
}

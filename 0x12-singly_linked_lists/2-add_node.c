#include "lists.h"
/**
 * add_node - This is a function will add
 * a new node at the beginning of a list_t list.
 * @head: This is the head of the linked list.
 * @str: This is a string to store in the list.
 * Return: address of the head is returned.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	len = 0;

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

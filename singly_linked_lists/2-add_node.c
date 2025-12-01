#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int len = 0;

	/* Check if the input string is NULL */
	if (str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the input string */
	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Populate the new node's members */
	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head; /* Point the new node to the current head */

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}

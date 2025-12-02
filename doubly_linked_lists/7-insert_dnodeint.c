#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of list
 * @idx: index where new node should be added
 * @n: integer value for new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* Insert at beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* If index is out of bounds */
	if (current == NULL)
		return (NULL);

	/* Insert at end */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Insert in the middle */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}

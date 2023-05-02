#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to a pointer pointing to the head of the listint_t list
 * @n: Value to store in the new node
 *
 * Return: The address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

		new_node = malloc(sizeof(*new_node));
		if (new_node == NULL)
		return (NULL);

		new_node->n = n;
		new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

		last_node = *head;
		while (last_node->next != NULL)
		last_node = last_node->next;

		last_node->next = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If there is a loop, the function returns a pointer to the start
 *         of the loop. Otherwise, it returns NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow && fast && slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

		return (slow);
		}
	}

		return (NULL);
}

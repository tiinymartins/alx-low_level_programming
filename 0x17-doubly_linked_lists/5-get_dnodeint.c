#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: head of the list
 * @index: index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int t;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	t = 0;

	while (head != NULL)
	{
		if (t == index)
			break;
		head = head->next;
		t++;
	}

	return (head);
}

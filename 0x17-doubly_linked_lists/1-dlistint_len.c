#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: head of list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}

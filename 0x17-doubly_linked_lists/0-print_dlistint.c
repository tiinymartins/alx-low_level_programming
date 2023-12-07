#include "lists.h"

/**
 * print_dlistint -  prints all the elements
 * @h: head of list
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int ment;

	ment = 0;

	if (h == NULL)
		return (ment);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ment++;
		h = h->next;
	}

	return (ment);
}

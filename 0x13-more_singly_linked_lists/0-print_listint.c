#include "lists.h"
/**
 * print_listint - print the element
 *
 * @h: the head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);
	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}

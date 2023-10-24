#include "lists.h"
/**
 * listint_int - return the number of elements
 * @h: head of pointer
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

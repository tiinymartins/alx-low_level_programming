#include "lists.h"
/**
 * listint_int - return the number of elements
 * @h: head of pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);
	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}

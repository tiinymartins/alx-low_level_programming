#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: head of the list
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *w;
	dlistint_t *vin;

	vin = malloc(sizeof(dlistint_t));
	if (vin == NULL)
		return (NULL);

	vin->n = n;
	vin->next = NULL;

	w = *head;

	if (w != NULL)
	{
		while (w->next != NULL)
			w = w->next;
		w->next = vin;
	}
	else
	{
		*head = vin;
	}

	vin->prev = w;

	return (vin);
}

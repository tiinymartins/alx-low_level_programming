#include "lists.h"

/**
 * add_dnodeint -  function that adds a new node at the beginning
 * @head: head of list
 * @n: value of the element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *vin;
	dlistint_t *k;

	vin = malloc(sizeof(dlistint_t));
	if (vin == NULL)
		return (NULL);

	vin->n = n;
	vin->prev = NULL;
	k = *head;

	if (k != NULL)
	{
		while (k->prev != NULL)
			k = k->prev;
	}

	vin->next = k;

	if (k != NULL)
		k->prev = vin;

	*head = vin;

	return (vin);
}

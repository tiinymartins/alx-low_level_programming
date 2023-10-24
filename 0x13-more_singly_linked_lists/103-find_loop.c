#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: the head pointer
 * Return: the address of the nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *previous;

	start = previous = head;
	while (start && previous && previous->next)
	{
		start = start->next;
		previous = previous->next->next;
		if (start == previous)
		{
			start = head;
			break;
		}
	}
	if (!start || !previous || !previous->next)
		return (NULL);
	while (start != previous)
	{
		start = start->next;
		previous = previous->next;
	}
	return (previous);
}

#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: head nodes
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int v;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	v = start->n;
	free(start);
	return (v);
}

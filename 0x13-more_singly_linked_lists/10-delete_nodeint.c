#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * @head: double pointer
 * @index: index of node
 * Return: the pointer of the node index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int f;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (f = 0; f < index - 1; f++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);
}

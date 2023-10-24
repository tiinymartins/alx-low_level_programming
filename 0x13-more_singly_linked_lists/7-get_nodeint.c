#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the pointer
 * @index: node index
 * Return: pointer of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	if (head == NULL)
		return (NULL);
	for (m = 0; m < index; m++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

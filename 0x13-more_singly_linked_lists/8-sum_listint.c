#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: the head pointer
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

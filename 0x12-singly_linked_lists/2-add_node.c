#include "lists.h"

/**
 * add_node - new node
 * @head: head of node
 * @str: strings
 * Return: new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int t, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (t = 0; str[t] != '\0'; t++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

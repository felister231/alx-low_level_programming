#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: is a pointer to the first node of the linked list
 * @idx: is the index of the list where the new node should be added
 * @n: parameter
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	size_t i = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	while (temp && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	node->next = temp->next;
	temp->next = node;

	return (node);
}

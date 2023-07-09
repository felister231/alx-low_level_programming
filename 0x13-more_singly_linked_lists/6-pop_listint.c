#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head nodes' data
 * @head: the pointer to the beginning of the list
 * Return: head node's data (n) or 0 if the linked list
 * is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}

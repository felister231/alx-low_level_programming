#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new; /* Pointer to the new node */
	list_t *temp = *head; /* Temporary pointer to traverse the list */
	unsigned int len = 0; /* Length of the string */

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Duplicate the string */
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	/* Set the length and next pointer of the new node */
	new->len = len;
	new->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse the list to reach the last node */
	while (temp->next)
		temp = temp->next;

	/* Set the next pointer of the last node to the new node */
	temp->next = new;

	return (new);
}

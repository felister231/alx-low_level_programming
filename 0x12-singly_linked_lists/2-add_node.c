#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;  /* Declare variable at beginning of function */

	if (str == NULL)  /* Check if the string is NULL */
		return (NULL);

	new = malloc(sizeof(list_t));  /* Allocate memory for the new node */
	if (new == NULL)  /* Check if memory allocation failed */
		return (NULL);

	new->str = strdup(str);/* Duplicate string and assign it to new node */
	if (new->str == NULL)/* Check if string duplication failed */
	{
		free(new);  /* Free the allocated memory for the new node */
		return (NULL);
	}

	new->len = strlen(str);  /* Calculate the length of the string */
	new->next = *head;  /* Set next ptr of new node to current head node */
	*head = new;  /* Update the head pointer to the new node */

	return (new);  /* Return the new node */
}

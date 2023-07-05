#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;  /* Store next ptr b4 freeing the current node */
		free(current->str);    /* Free the string */
		free(current);         /* Free the current node */
		current = next;        /* Move to the next node */
	}
}

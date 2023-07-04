#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;/* Iterate through the list until the end is reached */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u]%s\n", h->len, h->str);
		}

		count++;
		h = h->next;/* Move to the next node by updating the pointer */
	}

	return (count);/* Return the total number of nodes in the linked list */
}

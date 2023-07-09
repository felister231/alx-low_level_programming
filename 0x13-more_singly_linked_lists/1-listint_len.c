#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked list
 * @h: pointer
 * Return:counter
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linkedlist
 * @h: pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}

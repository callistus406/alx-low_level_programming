#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Prints the number of elements in a linked list
 * @h: Pointer to the head node of the linked list
 * Return: size_t
 */

size_t listint_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}

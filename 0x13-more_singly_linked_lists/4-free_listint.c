#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next_node;
		free(current);
		current = next_node;
	}
}

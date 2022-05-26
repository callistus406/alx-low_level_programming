#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * Description: at the end, the head will point to NULL.
 * be moving a temp pointer, free its memory if not NULL
 * Untill we reach the tail
 * @head: begining of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

}

#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_
#include <stdlib.h>
#include <unistd.h>

/**
 * struct list_s - singly linked list
 * @str: integer 
 * @len: length of the integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int *n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif 

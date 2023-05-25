#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(my_stack_t *head)
{
	my_stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

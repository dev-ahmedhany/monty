#include "monty.h"

/**
 * s_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void s_pall(my_stack_t **head, unsigned int counter)
{
	my_stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

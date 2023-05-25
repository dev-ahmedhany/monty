#include "monty.h"

/**
 * s_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void s_pop(my_stack_t **head, unsigned int counter)
{
	my_stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

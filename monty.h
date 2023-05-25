#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /* File, fopen, getline, fclose, stderr */
#include <stdlib.h> /* EXIT_SUCCESS, EXIT_FAILURE, free */

#include <string.h> /* strtok, strcmp */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} my_stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(my_stack_t **stack, unsigned int line_number);
} instruction_t;


typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

int execute(char *content, my_stack_t **head, unsigned int counter,
FILE *file);
void s_push(my_stack_t **head, unsigned int number);
void s_pall(my_stack_t **head, unsigned int number);
void s_pint(my_stack_t **head, unsigned int number);
void s_pop(my_stack_t **head, unsigned int number);
void s_swap(my_stack_t **head, unsigned int number);
void s_add(my_stack_t **head, unsigned int number);
void s_nop(my_stack_t **head, unsigned int number);
void free_stack(my_stack_t *head);
void add_node(my_stack_t **head, int n);
void add_queue(my_stack_t **head, int n);

#endif

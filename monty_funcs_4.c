#include "monty.h"
void monty_rot1(stack_t **stack, unsigned int line_number)
void monty_rotr(stack_t **stack, unsigned int line_number)
void monty_stack(stack_t **stack, unsigned int line_number)
void monty_queue(stack_t **stack, unsigned int line_number)	
/**
 * monty_rot1 - rotates the top value of a stack_t linked list to the bottom
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line number of a monty bytecodes file
 */

void monty_rot1(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;
	
	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bettom->next;

	top->next->prev = *stack;
	(*stack)->next = top->next;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;

	(void)line_number;
}

/**
 * monty_rotr - rotates the top value of a stack_t linked list to the top
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line number of a monty bytecodes file
 */
void monty_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;
	
	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bettom->next;

	bottom->prev->next = NULL;
	(*stack)->next = bottom;
	bottom->prev = *stack;
	bottom->next = top;
	top->prev = bottom;

	(void)line_number;
}
/**
 * monty_stack - coonverts que to stack
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line number of a monty bytecodes file
 */
void monty_stack(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = STACK;
	(void)line_number;
}
/**
 * monty_queue - converts stack to queue
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line number of a monty bytecodes file
 */
void monty_queue(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = QUEUE;
	(void)line_number;
}

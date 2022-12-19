#include "monty.h"
#include <string.h>

void free_stack
/**
 *free stack - frees a stack_t stack
 *@stack: a pointer to the top (stack) 
 *
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
/**
 *init_stack - initializes a stack_t stack with beginning and ending que nodes
 *@stack: a pointer to the top (stack) 
 *
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

/**
 *init_stack - initializes a stack_t stack with beginning and ending que nodes
 *@stack: a pointer to the top (stack) 
 *
 * return: if an error occurrs -EXIT_FAILURE otherwise -EXIT_SUCCESS
 */
void init_stack(stack_t **stack)
{
	stack_t *s;
	s = malloc(sizeof(stack_t));
	if (s == NULL )
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;
	return (EXIT_SUCCESS);
}

/**
 *check_mode - checks if a stack_t linked llist id in stack or que mode
 *@stack: a pointer to the top (stack) 
 *
 * return: if stack_t in stack mode - STACK(0)
 *         if the stack_t is in queue mode - QUEUE(1) otherwise 2.
 */
void check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	elseif (stack ->n == QUEUE)
		return(2);
}

#include "monty.h"
void monty_nop(stack_t **stack, unsigned int line_number)
void monty_pstr(stack_t **stack, unsigned int line_number)
void monty_pchar(stack_t **stack, unsigned int line_number)
/**
 * monty_nop - does absolutely nothing for monty opcode
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line of amonty bytecodes file 
 */

void monty_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * monty_pchar - prints the character in the top value node of the linked list
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line of amonty bytecodes file 
 */

void monty_pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pchar_error(line_number,"stack empty"));
		return;
	}
	if ((*stack)->next->n < 0 || (*stack)->next-> >127)
	{
		set_op_tok_error(pchar_error(line_number,"value out of range));
		return;
	}
	printf('%c\n', (*stack)->nest->n);
}
/**
 * monty_pstr - prints the string containd in the linked list
 * @stack: a pointer to the top mode node of a stack_t linked list
 * @line_number: the current working line of amonty bytecodes file 
 */
void monty_pstr(stack_t **stack, unsigned int line_number)
{
        stack_t *tmp = (*stack) ->next;

	while (tmp && tmp-> != 0 && (tmp->n > 0 && tmp->n <= 127))
	{
		printf("%c", tmp ->n);
		tmp = tmp->next;
	}
	printf("\n");
	(void)line_number;
}

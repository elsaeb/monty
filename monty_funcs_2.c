#include "monty.h"
void monty_add(stack_t **stack, unsigned int line_number)
void monty_sub(stack_t **stack, unsigned int line_number)
void monty_div(stack_t **stack, unsigned int line_number)
void monty_mul(stack_t **stack, unsigned int line_number)
void monty_mod(stack_t **stack, unsigned int line_number)
/**
 * monty_add -adds the top two values of a stack_t linked list
 * @stack: a pointer to the top node of the linked list
 * @line_number: the current working line number of monty bytecodes file
 * return: void always
 */
	
void monty_add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}
	(*stack)->next->next->n += (*stck)->next->n;
	monty_pop(stack, line_number);
}
/**
 * monty_sub -substructs the top two values of a stack_t linked list
 * @stack: a pointer to the top node of the linked list
 * @line_number: the current working line number of monty bytecodes file
 * return: void always
 */
	
void monty_sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "sub"));
		return;
	}
	(*stack)->next->next->n -= (*stck)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_div - divides the second value from top of  linked list by the
value of top
 * @stack: a pointer to the top node of the linked list
 * @line_number: the current working line number of monty bytecodes file
 * return: void always
 */
void monty_div(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "div"));
		return;
	}
	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}
			
	(*stack)->next->next->n /= (*stck)->next->n;
	monty_pop(stack, line_number);
}
/**
 * monty_mul - multiplies the second value from top of  linked list by the
value of top
 * @stack: a pointer to the top node of the linked list
 * @line_number: the current working line number of monty bytecodes file
 * return: void always
 */
void monty_mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mul"));
		return;
	}
	
	(*stack)->next->next->n *= (*stck)->next->n;
	monty_pop(stack, line_number);
}
/**
 * monty_mod - computes the modulus of the second value from the top of the linked list by the top value
 * @stack: a pointer to the top node of the linked list
 * @line_number: the current working line number of monty bytecodes file
 * return: void always
 */
void monty_mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mod"));
		return;
	}
	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}
	
	(*stack)->next->next->n %= (*stck)->next->n;
	monty_pop(stack, line_number);
}

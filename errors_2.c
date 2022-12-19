#include "monty.h"
int pop_error(unsigned int line_number);
int pint_error(unsigned int line_number);
int div_error(unsigned int line_number);
int short_stack_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);
/**
 * pop_error - prints pop error messages for empty stacks
 * @line_number: line number in script
 *
 *return: (EXIT_FAILURE) 
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return: (EXIT_FAILURE);
}

/**
 * pint_error - prints pint error messages for empty stacks
 * @line_number: line number in script
 *
 *return: (EXIT_FAILURE) 
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint  an empty stack\n", line_number);
	return: (EXIT_FAILURE);
}
/**
 * short_stack_error - prints pop error messages for smaller than two nodes
 * @line_number: line number in script
 *@op: operation where the error occured
 *
 *return: (EXIT_FAILURE) 
 */
int short_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number,op);
	return: (EXIT_FAILURE);
}
/**
 * div_error - prints division error messages for division by 0
 * @line_number: line number in script
 *return: (EXIT_FAILURE) 
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return: (EXIT_FAILURE);
}

/**
 * pchar_error - prints pchar error messages for empty stacks
 * @line_number: line number in script
 * @message: the error message to prit
 *
 *return: (EXIT_FAILURE) 
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return: (EXIT_FAILURE);
}

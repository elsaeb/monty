include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 *usage_error - prints usage error messages
 * description: stacs and queues
 *Return: (EXIT_FAILURE);
 */
int usage_error(void)
{
	fprintf(stderr, "usage: monty file\n");
	return (EXIT_FAILURE);
}

/**
*malloc_error - prints malloc error messages
* description: stacs and queues
*Return: (EXIT_FAILURE) always
*/
int malloc_error(void)
{
	fprintf(stderr, "error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - prints file openning error messages with file name
 * @filename: name of the file failed to open
 * description: stacs and queues
 * return: (EXIT_FAILURE) always
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "error: cant open file %s\n", filename);
	return (EXIT_FAILURE);
}
/**
 *unknown_op_error - prints uncknown instruction error messages
 *@opcode: opcode where the error occured
 *@line_number: line number in monty bytecodes file where erroe occured
 * description: stacs and queues
 *return: (EXIT_FAILURE) always
 */
int unknown_op_error(char  *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s/n", line_number, opcode);
	return (EXIT_FAILURE);
}
/**
 * no_int_error - prints invalid monty push argument error message
 * @line_number: line number in monty bytecodes file where error occurred
 *
 * description: stacs and queues
 * return: (EXIT_FAILURE) always
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer/n", line_number);
	return (EXIT_FAILURE);
}
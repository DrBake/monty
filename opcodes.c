#include "monty.h"

/**
 * push - Pushes an integer onto a stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number where the opcode is located.
 * @argument: The integer (as a string) to be pushed onto the stack.
 *
 * Description: If the provided argument is not an integer or no argument
 * is provided, an error message is printed to stderr and the program exits.
 * Otherwise, the argument is converted to an integer and added to the stack.
 */

void push(stack_t **stack, unsigned int line_number, char *argument)
{
	stack_t *new_node;
	int num;

	num = atoi(argument);
	if (argument == NULL || num == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * pall - Prints all the values on the stack, starting from the top.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number where the opcode is located.
 *
 * Description: If the stack is not empty, this function prints all its
 * values to stdout. If the stack is empty, nothing is printed.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;  /* to avoid unused parameter warning */

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

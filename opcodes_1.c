#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (bus.content == NULL || check_if_number(bus.content) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(bus.content);
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * pall - Prints all values on the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
(void)line_number;
}

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
(void)line_number;
}

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
(void)line_number;
}


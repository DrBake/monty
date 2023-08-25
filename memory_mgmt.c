#include "monty.h"

/**
 * free_stack - Frees a stack.
 * @stack: Double pointer to the top of the stack.
 *
 * Description: Frees each node in the stack and then sets the stack pointer to NULL.
 */
void free_stack(stack_t **stack)
{
	stack_t *current;

	while (*stack)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
}


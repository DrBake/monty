#include "monty.h"

void push(stack_t **stack, unsigned int line_number, char *argument)
{
    stack_t *new_node;
    int num;

    if (argument == NULL || (num = atoi(argument)) == 0)
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

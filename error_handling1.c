#include "monty.h"

void print_open_error(char *filename)
{
    fprintf(stderr, "Error: Can't open file %s\n", filename);
    exit(EXIT_FAILURE);
}

void print_malloc_error(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    exit(EXIT_FAILURE);
}

void print_int_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: usage: push integer\n", line_number);
    exit(EXIT_FAILURE);
}

void print_pint_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
    exit(EXIT_FAILURE);
}

void print_pop_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
    exit(EXIT_FAILURE);
}


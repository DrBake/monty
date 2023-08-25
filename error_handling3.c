#include "monty.h"

void print_mul_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
    exit(EXIT_FAILURE);
}

void print_mod_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
    exit(EXIT_FAILURE);
}

void print_char_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
    exit(EXIT_FAILURE);
}

void print_pchar_stack_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
    exit(EXIT_FAILURE);
}


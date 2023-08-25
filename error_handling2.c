#include "monty.h"

void print_swap_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
    exit(EXIT_FAILURE);
}

void print_add_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
    exit(EXIT_FAILURE);
}

void print_sub_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
    exit(EXIT_FAILURE);
}

void print_div_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
    exit(EXIT_FAILURE);
}

void print_div_zero_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: division by zero\n", line_number);
    exit(EXIT_FAILURE);
}


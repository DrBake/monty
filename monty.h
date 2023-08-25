#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

/* Define the stack_t struct */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* Define the instruction_t struct */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct bus_s 
{
    char *content;
} bus_t;

bus_t bus;


/* Prototypes for the main functions */
void execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void free_stack(stack_t **stack);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div_opcode(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);

/* Prototypes for error handling functions */
void print_open_error(char *filename);
void print_malloc_error(void);
void print_int_error(unsigned int line_number);
void print_pint_error(unsigned int line_number);
void print_pop_error(unsigned int line_number);
void print_swap_error(unsigned int line_number);
void print_add_error(unsigned int line_number);
void print_sub_error(unsigned int line_number);
void print_div_error(unsigned int line_number);
void print_div_zero_error(unsigned int line_number);
void print_mul_error(unsigned int line_number);
void print_mod_error(unsigned int line_number);
void print_char_error(unsigned int line_number);
void print_pchar_stack_error(unsigned int line_number);

#endif /* MONTY_H */


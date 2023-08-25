#include "monty.h"

/**
 * print_usage_error - Prints usage error messages.
 */
void print_usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * print_file_error - Prints file error messages.
 * @filename: Name of the file that caused the error.
 */
void print_file_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * print_command_error - Prints command error messages.
 * @line: Line number where the error occurred.
 * @opcode: The opcode that caused the error.
 */
void print_command_error(unsigned int line, char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
	exit(EXIT_FAILURE);
}


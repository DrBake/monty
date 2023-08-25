#include "monty.h"

/**
 * main - Entry point for the Monty interpreter.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on errors.
 */
int main(int argc, char **argv)
{
	FILE *file;

	if (argc != 2)
	{
		print_usage_error();
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		print_open_error(argv[1]);
	}

	/* TODO: Parse and execute the Monty bytecodes here */

	fclose(file);
	return (EXIT_SUCCESS);
}


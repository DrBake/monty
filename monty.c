#include "monty.h"

/**
 * main - An interpreter for Monty ByteCodes.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 * Return: EXIT_FAILURE or EXIT_SUCCESS if the program completes successfully.
 */

int main(int argc, char **argv)
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

    /* TODO: Parse and execute the Monty bytecodes here */

	fclose(file);
	return (EXIT_SUCCESS);
}

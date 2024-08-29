#include "shell.h"

/**
* main - Entry point of the program
*
* This function prompts the user for input, reads a line from stdin,
*and then prints the input back to stdout. It handles cases where
* the input could not read.
*
* Return: Always 0 (success), or 1 if the input could not be read
*/

int main(void)
{
	char *inp = NULL;
	size_t len_inp = 0;

	printf("cmd$ ");
	int read = getline(&inp, &len_inp, stdin);

	if (read == -1)
	{
		free(inp);
		printf("The program failed to read the line due to interruptions\n");
		return (1);
	}
	else
	{
		printf("%s\n", inp);
	}
	free(inp);
return (0);
}

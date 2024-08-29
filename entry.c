#include "shell.h"

int main()
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

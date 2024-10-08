#include "shell.h"

void execute_cmd(const char *cmd)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
	else if (child_pid == 0)
		{
			execlp(command, command, (char *)NULL);
			perror("execlp");
			exit(EXIT_FAILURE);
		}
	else
		{
			wait(NULL);
		}
}

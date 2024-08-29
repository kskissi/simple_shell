#include "shell.h"

/**
* my_print - function that writes to the stdout
* @msg: character to print
*
*Return: -1 0n error
*/

void my_print(const char *msg)
{
	write(STDOUT_FILENO, msg, strlen(msg));
}


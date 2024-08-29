#ifndef SHELL_H
#define SHEEL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void disp_prompt(void);
void read_cmd(char *cmd, size_t size);
void my_print(const char *msg);
void execute_cmd(const char *cmd);

#endif 

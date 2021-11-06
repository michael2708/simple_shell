#include "main.h"
/**
 *lsh_loop - function to initiate a loop
 *@void: no arguments
 */
void lsh_loop(void)
{
char *line;
char **args;
int status;
do {
_print("$ ");
line = lsh_read_line();
args = lsh_split_line(line);
status = lsh_execute(args);
free(line);
free(args);
} while (status);
}

#include "main.h"
/**
 *lsh_read_line - split function
 *@void: no arguments
 *Return: line
 */
char *lsh_read_line(void)
{
char *line = NULL;
size_t buffersize = 0;
if (getline(&line, &buffersize, stdin) == -1)
{
if (feof(stdin))
{
exit(EXIT_FAILURE);
}
else
{
perror("readline");
exit(EXIT_FAILURE);
}
}
return (line);
}

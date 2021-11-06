#include "main.h"
/**
 *lsh_execute - executes the builtin string
 *and system call
 *@args: argument
 *Return: 1 to continue and 0 to terminate
 */
int lsh_execute(char **args)
{
if (args[0] == NULL)
{
return (1);
}
if (_strcmp(args[0], "exit") == 0)
{
return (lsh_exit(args));
}
if (_strcmp(args[0], "cd") == 0)
{
return (lsh_cd(args));
}
if (_strcmp(args[0], "help") == 0)
{
return (lsh_help(args));
}
return (lsh_launch(args));
}

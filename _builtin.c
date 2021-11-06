#include "main.h"
/**
 *lsh_cd - change directory
 *@args: argument
 *Return: 0 to continue and 1 to terminate
 */
int lsh_cd(char **args)
{
if (args[1] == NULL)
{
perror("lsh");
}
else
{
if (chdir(args[1]) != 0)
{
perror("lsh");
}
}
return (1);
}


/**
 *lsh_help - help
 *@args: argument
 *Return: 1 to continue and 0 to terminate
 */
int lsh_help(char **args __attribute__((unused)))
{
_print("Type program names and arguments, and hit enter.\n");
_print("The following are built in:\n");
_print("cd\n");
_print("exit\n");
_print("Use the man command for infrmation on other programs.\n");
return (1);
}

/**
 *lsh_exit - exit command
 *@args: argument
 *Return: 0 to continue and 1 to terminate
 */
int lsh_exit(char **args __attribute__((unused)))
{
return (0);
}

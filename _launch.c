#include "main.h"
/**
 *lsh_launch - system call function
 *@args: argument
 *Return: 0 to continue and 1 to terminate
 */

int lsh_launch(char **args)
{
pid_t pid;
int status;
pid = fork();
if (pid == 0)
{
if (execvp(args[0], args) == -1)
{
perror("lsh");
}
exit(EXIT_FAILURE);
}
else if (pid < 0)
{
perror("lsh");
}
else
{
waitpid(pid, &status, WUNTRACED);
}
return (1);
}

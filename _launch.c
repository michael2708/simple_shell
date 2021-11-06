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
if (execve(args[0], args, NULL) == -1)
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
do {
waitpid(pid, &status, WUNTRACED);
} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}
return (1);
}

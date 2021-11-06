#include "main.h"
/**
 *lsh_launch - system call function
 *@args: argument
 *Return: 0 to continue and 1 to terminate
 */

int lsh_launch(char **args)
{
pid_t pid, wpid;
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
wpid = waitpid(pid, &status, WUNTRACED);
} while (!WIFEXTED(status) && !WIFSIGNALED(status));
}
return (1);
}

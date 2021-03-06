#include "main.h"
/**
 *lsh_split_line - split function
 *@line: user inputs
 *Return: tokens
 */
char **lsh_split_line(char *line)
{
int bufsize = TOK_BUFSIZE, position = 0;
char **tokens = malloc(bufsize * sizeof(char *));
char *token;
if (!tokens)
{
perror("allocation error");
exit(EXIT_FAILURE);
}
token = strtok(line, TOK_DELIM);
while (token != NULL)
{
tokens[position] = token;
position++;
if (position >= bufsize)
{
bufsize += TOK_BUFSIZE;
tokens = _realloc(tokens, (sizeof(char *) * bufsize));
if (!tokens)
{
perror("allocation error");
exit(EXIT_FAILURE);
}
}
token = strtok(NULL, TOK_DELIM);
}
tokens[position] = NULL;
return (tokens);
}

#ifndef MAIN_H_
#define MAIN_H_
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char **argv);
int _putchar(char c);
void _print(char *str);
void lsh_loop(void);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
int lsh_launch(char **args);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int lsh_execute(char **args);
int _strcmp(char *s1, char *s2);
void *_realloc(void *ptr, unsigned int new_size);

#endif

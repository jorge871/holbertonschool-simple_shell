#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

struct stat st;
extern char **environ;

/*auxfunct*/
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strchr(char *s, char c);
char *_getenv(char *env);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);

/*more_auxfunct*/
void _perror(char *name, char *cmd);
char *_strdup(char *str);
int _putchar(char c);
void _print_env(void);

/*more_moreauxfunct*/
int _execve(char **args);
char *_strcat(char *dest, char *src);

/*more_more_auxfunct2*/
char **generate_arguments(char *s, char *delimeters);
void _puts(char *s);
char *_which(char *cmd);
void free_array(char **array);

#endif

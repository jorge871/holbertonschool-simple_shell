#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <wait.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <errno.h>

struct stat st;
extern char **environ;

/*auxfunct*/
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t n);
int _strlen(const char *s);
char *_strchr(char *s, char c);
char *_getenv(char *env);

/*more_auxfunct*/
void _perror(char *name, char *cmd);
char *_strdup(char *str);
int _putchar(char c);
void _print_env(void);

/*more_moreauxfunct*/
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int _execve(char **args);
char *strtok(char *str, const char *delim);
char *_strcat(char *dest, char *src);

/*more_more_auxfunct2*/
char **generate_arguments(char *s, char *delimeters);
void _printEnv(void);
void _puts(char *s);
char *_which(char *cmd);


/*more_more_auxfunct_three*/
void _perror_singlular(const char *s);
void free_array(char **array);

char *_path(void);
void free(void *ptr);

#endif

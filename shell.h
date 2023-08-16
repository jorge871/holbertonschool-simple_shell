#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <wait.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

extern char **environ;

int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, size_t n);
char *_strdup(char *s);
char *_strchr(char *s, char c);
int _execve(char **args);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char *strtok(char *str, const char *delim);
void _perror(char *name, char *cmd);
void _perror_single(const char *s);
void _getenv(char **env);
char *_strcat(char *dest, char *src);
void _puts(char *str); 
char *_path(void);
void free(void *ptr);
char **generate_arguments(char *s, char *delimeters);
void _print_env(void);
void free_array(char **array);


#endif

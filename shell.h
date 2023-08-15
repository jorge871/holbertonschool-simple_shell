_#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <wait.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

extern char **environ

int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);
int _execve(char **args);
ssize_t getline(char **restrict lineptr, size_t *restrict n, FILE *restrict stream);
char *strtok(char *restrict str, const char *restrict delim);
void perror(const char *s);
void _getenv(char **env);

#endif
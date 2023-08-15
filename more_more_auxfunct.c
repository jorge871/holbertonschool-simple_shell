#include "shell.h"
/**
 * _getline_command -  Get inputs
 * Return: The input
 */

char *_getline_command(void)
{
    char *lineptr = NULL;
    size_t charter_user = 0;

    if (isatty(STDIN_FILENO)) {
        write(STDOUT_FILENO, "$ ", 2);
    }

    if (getline(&lineptr, &charter_user, stdin) == -1) {
        free(lineptr);
        return NULL;
    }

    return lineptr;
}
/**
*_execve - execute programs
*@args: arguments/parameters
*Return: always success
*/

extern char **environ;

int _execve(char **args) 
 { 
         int status = 0; 
  
         if (fork() == 0) 
         { 
                 execve(args[0], args, environ); 
         } 
         else 
                 wait(&status); 
         return (WEXITSTATUS(status)); 
 }
/**
 * Custom string tokenization function.
 * Splits a string into tokens using the specified delimiter.
 * 
 * @param str The input string to be tokenized.
 * @param delim The delimiter used to separate tokens.
 * @return A pointer to the next token found, or NULL if no more tokens are present.
 */
char *strtok(char *restrict str, const char *restrict delim)
{
    char *strtok_custom(char *restrict str, const char *restrict delim) {
    static char *saved_str = NULL;
    
    if (str != NULL) {
        saved_str = str;
    }
    
    if (saved_str == NULL || *saved_str == '\0') {
        return NULL;
    }
    
    while (*saved_str != '\0' && strchr(delim, *saved_str) != NULL) {
        saved_str++;
    }
    
    if (*saved_str == '\0') {
        return NULL;
    }
    
    char *token_start = saved_str;
    while (*saved_str != '\0' && strchr(delim, *saved_str) == NULL) {
        saved_str++;
    }
    
    if (*saved_str != '\0') {
        *saved_str = '\0';
        saved_str++;
    }
    
    return token_start;
}
}
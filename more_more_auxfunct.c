#include "shell.h"
/**
 * _getline_command -  Get inputs
 * Return: The input
 */

char *_getline_command(void)
{
	char *lineptr = NULL;
	size_t charter_user = 0;

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", 2);
	}

	if (getline(&lineptr, &charter_user, stdin) == -1)
	{
		free(lineptr);
		return (NULL);
	}

	return (lineptr);
}

/**
*_execve - execute programs
*@args: arguments/parameters
*Return: always success
*/

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
 *strtok - Custom string tokenization function.
 *@str: The input string to be tokenized.
 *@delim: The delimiter used to separate tokens.
 *Return: A pointer to the next token found
 */

char *strtok(char *str, const char *delim)
{
	static char *saved_str;
	char *token_start = NULL;

	if (str != NULL)
		saved_str = str;

	if (saved_str == NULL || *saved_str == '\0')
		return (NULL);

	while (*saved_str != '\0' && strchr(delim, *saved_str) != NULL)
		saved_str++;

	if (*saved_str == '\0')
		return (NULL);

	while (*saved_str != '\0' && strchr(delim, *saved_str) == NULL)
		saved_str++;

	if (*saved_str != '\0')
	{
		*saved_str = '\0';
		saved_str++;
	}

	return (token_start);
}

/**
 *_strcat - concatenate two strings
 *@dest: destination
 *@src: source
 *Return: always success
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j] = src[i];

	return (dest);
}

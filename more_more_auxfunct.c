#include "shell.h"
/**
 * _getline_command -  Get inputs
 * @lineptr: pointer to get buffer where line is stored
 * @n:stores size of allocated buffer
 * @stream:The input stream from which the line is read.
 * Return: The input
 */

ssize_t _getline_command(char **lineptr, size_t *n, FILE *stream)
{
	ssize_t chars_read;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	chars_read = getline(lineptr, n, stream);

	if (chars_read == -1)
	{
		free(lineptr);
		return (-1);
	}

	return (chars_read);
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

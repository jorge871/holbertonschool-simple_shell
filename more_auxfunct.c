#include "shell.h"

/**
 *_perror - Custom error message printing function.
 *Prints an error message with additional context.
 *@name: The name of the entity causing the error.
 *@cmd: The command or action associated with the error.
 *Return: Success
 */

void _perror(char *name, char *cmd)
{
	char *msg = NULL;
	int length = 0;

	length = sizeof(char) * (_strlen(name) + _strlen(cmd) + 18);
	msg = malloc(length);
	if (!msg)
		exit(0);
	msg[0] = '\0';
	_strcat(msg, name);
	_strcat(msg, ": 1: ");
	_strcat(msg, cmd);
	_strcat(msg, ": not found\n");
	write(2, msg, length - 1);
	free(msg);
}
/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: string
 * Return: return array
 */
char *_strdup(char *str)
{
	char *tmp;
	unsigned int in = 0;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);

	for (; str[size]; size++)
		;

	tmp = malloc(size + 1);

	if (tmp == NULL)
		return (NULL);
	while (in < size)
	{
		tmp[in] = str[in];
		in++;
	}
	tmp[in] = '\0';
	return (tmp);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_getenv - prts env to standard output
 *@env: enviroment
 *Return: env
 */

void _getenv(char **env)
{
	size_t run = 0;

	while (env[run])
	{
		write(STDOUT_FILENO, env[run], _strlen(env[run]));
		write(STDOUT_FILENO, "\n", 1);
		run++;
	}
}

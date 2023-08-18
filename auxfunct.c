#include "shell.h"

/**
 *_strcmp - Custom string comparison function.
 *@s1: The first string for comparison.
 *@s2: The second string for comparison.
 *Return: zero
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

	if (!s1 && !s2)
		return (0);
	if (!s1 || !s2)
		return (-1);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/**
 *_strlen - Custom string length function.
 *@s: The input string.
 *Return: The length of the input string.
 */

int _strlen(char *s)
{
int length = 0;

	while (*(s + length))
		length++;
	return (length);
}

/**
 *_strchr - Custom string search function.
 *@s: The input string.
 *@c: The character
 *Return: return zero
 */

char *_strchr(char *s, char c)
{
int i = 0;

	for (; s[i] && s[i] != c; i++)
		;

	return (s[i] == c ? &s[i] : '\0');
}

/**
 *_getenv - prints env to standard output
 *@env: enviroment
 *Return: environment
 */

char *_getenv(char *env)
{
	char *aux;
	char *content;
	int i = 0;

	for (; environ[i]; i++)
	{
		aux = _strdup(environ[i]);
		aux = strtok(aux, "=");
		if (_strcmp(aux, env) == 0)
		{
			content = _strdup(strtok(NULL, "="));
			free(aux);
			return (content);
		}
		free(aux);
	}
	return (NULL);
}

/**
 * _getline -  Get inputs
 * @lineptr: pointer to get buffer where line is stored
 * @n:stores size of allocated buffer
 * @stream:The input stream from which the line is read.
 * Return: The input
 */

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	ssize_t chars_read;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	chars_read = _getline(lineptr, n, stream);

	if (chars_read == -1)
	{
		free(lineptr);
		return (-1);
	}

	return (chars_read);
}

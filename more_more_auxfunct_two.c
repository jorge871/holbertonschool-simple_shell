#include "shell.h"
/**
* generate_arguments - generates an array with the given arguments
* @s: strings variable to tokenize
* @delimeters: bounding parameters
* Return: full array
*/
char **generate_arguments(char *s, char *delimeters)
{
	char **args;
	int f = 0;
	int len = 0;
	char *s_tmp;
	char *tkn;

	s_tmp = _strdup(s);
	tkn = strtok(s_tmp, delimeters);
	for (len = 0; tkn; len++)
	{
		tkn = strtok(NULL, delimeters);
	}
	free(s_tmp);
	args = malloc(sizeof(char *) * (len + 1));
	if (args == NULL)
	{
		return (NULL);
	}

	s_tmp = _strdup(s);
	tkn = strtok(s_tmp, delimeters);
	for (f = 0; tkn; f++)
	{
		args[f] = _strdup(tkn);
		tkn = strtok(NULL, delimeters);
	}
	args[f] = NULL;
	free(s_tmp);
	return (args);
}


/**
 * _puts - Print a string
 * @s: string
 * Return: character
 */

void _puts(char *s)
{
	int c = 0;

	while (*(s + c))
	{
		_putchar(*(s + c));
		c++;
	}
}

/**
* _which - checks and finds the path of the command passed to it
* @cmd: command
* Return: the absolute path of the comand
*/


char *_which(char *cmd)
{
	char *paths = NULL;
	char *path = NULL;
	char *cmd_path = NULL;

	paths = _getenv("PATH");
	if (paths)
		path = strtok(paths, ":");

	if (_strchr(cmd, '/') && stat(cmd, &st) == 0)
	{
		if (path)
			free(path);
		return (_strdup(cmd));
	}
	while (path)
	{
		cmd_path = malloc(sizeof(char) * _strlen(path) + _strlen(cmd) + 2);
		if (!cmd_path)
			return (NULL);
		cmd_path[0] = '\0';
		_strcat(cmd_path, path);
		_strcat(cmd_path, "/");
		_strcat(cmd_path, cmd);

		if  (stat(cmd_path, &st) == 0)
		{
			free(paths);
			return (cmd_path);
		}
		path = strtok(NULL, ":");
		free(cmd_path);
	}
	if (paths)
		free(paths);
	return (NULL);
}

/**
 * free_array - frees a 2 dimensional
 * @array: Array
 */
void free_array(char **array)
{
	int i = 0;

	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

#include "shell.h"

/**
* main - program shell
* @argc: number of given arguments
* @argv: array of arguments
* Return:  return exit status of last program.
*/
int main(int __attribute__((unused)) argc, char **argv)
{
	char *buff = NULL, *cmd;
	size_t ln = 0;
	char **args;
	int status = 0;

	while (1)
	{
		if (isatty(0) == 1)
			_puts("$ ");
		if (getline(&buff, &ln, stdin) == -1 || _strcmp(buff, "exit\n") == 0)
		{
			if (buff)
				free(buff);
			exit(status);
		}
		cmd = _strdup(buff);
		strtok(cmd, "\n");
		args = generate_arguments(cmd, "\t \n");
		free(cmd);
		if (_strcmp(args[0], "env") == 0)
			_print_env();
		else if (args[0])
		{
			cmd = _which(args[0]);
			if (cmd)
			{
				free(args[0]);
				args[0] = cmd;
				status = _execve(args);
			}
			else
			{
				status = 127;
				_perror(argv[0], args[0]);
			}
		}
		free_array(args);
	}
	return (0);
}

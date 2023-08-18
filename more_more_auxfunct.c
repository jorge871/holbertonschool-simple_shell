#include "shell.h"
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

	dest[j] = '\0';
	return (dest);
}

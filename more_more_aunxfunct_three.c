#include "shell.h"

/**
 * free_array - frees a 2 dimensional
 * @array: Array
 *Return: free memory
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

#include "shell.h"
/**
 *_strcmp - Custom string comparison function.
 *@s1: The first string for comparison.
 *@s2: The second string for comparison.
 *Return: zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/**
 *_strncmp - comparing two strings
 *@s1: The first string for comparison.
 *@s2: The second string for comparison.
 *@n: The maximum number of characters to compare.
 *Return: zero
 */
int _strncmp(char *s1, char *s2, int n)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (n);
			s1++;
			s2++;
			n--;
		}	
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
	int a;

	a = strlen(s);
	return (a);
}

/**
 *_strchr - Custom string search function.
 *@s: The input string.
 *@c: The character
 *Return: return zero
 */

char *_strchr(char *s, char c)
{
int cont = 0;

	while (s[cont])
	{
		if (s[cont] == c)
			return (s + cont);
	cont++;
	}
	if (c == 0)
		return (s + cont);
	return (0);
}


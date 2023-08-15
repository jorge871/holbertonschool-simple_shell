#include "shell.h"
/**
 * _strcmp - Custom string comparison function.
 * Compares two strings and returns an integer indicating their order.
 * 
 * @s1: The first string for comparison.
 * @s2: The second string for comparison.
 *
 * return: zero
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
 * _strncmp - Custom substring comparison function.
 * Compares the first 'n' characters of two strings and returns an integer indicating their order.
 * 
 * @s1: The first string for comparison.
 *
 * @s2: The second string for comparison.
 *
 * @n: The maximum number of characters to compare.
 * return:
 */
int _strncmp(char *s1, char *s2, int n)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return 👎
	}
}
/**
 * _strlen - Custom string length function.
 * Computes and returns the length of the input string.
 * @s The input string. 
 * return: The length of the input string.
 */
int _strlen(char *s)
{
	int a;
	a = strlen(s);
	return (a);
}
/**
 * Custom string search function.
 * Searches for the first occurrence of a character in a string.
 *
 * @s: The input string. 
 * @c: 
 * return: return zero
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
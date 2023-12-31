#include "shell.h"

/**
 * _strlen - Returns a length of a string
 * @s: A string whose length is to check
 *
 * By : Jojo-Programming
 * Return: integer length of a string
 */

	int _strlen(char *s)
{
	int i = 0;

	if (!s)
	return (0);

	while (*s++)
	i++;
	return (i);
}

/**
 * _strcmp - Performs lexicogarphic
 *  differentiation of 2 stiangs.
 * @s1: first string.
 * @s2: second string.
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
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
	if (*s1 == *s2)
	return (0);

	else
	return (*s1 < *s2 ? -1 : 1);
}

/**
 * start_with - checks if the needle starts
 * with a haystack.
 * @needle: substring to find.
 * @haystack: The string to search.
 * Return: Address of the next char of haystack
 * or NULL.
 */

	char *start_with(const char *haystack, const char *needle)
{
	while (*needle)

	if (*needle++ != *haystack++)
	return (NULL);

	return ((char *)haystack);
}

/**
 * _strcat - Concatenates two strings
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return:the pointer to destination buffer
 */

	char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
	dest++;

	while (*src)
	*dest++ = *src++;
	*dest = *src;
	return (ret);
}

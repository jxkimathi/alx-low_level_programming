#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of located substring
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}

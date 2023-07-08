#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: input string
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the substring within the string,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *p = needle;
		{
			h++;
			p++;
		}

		if (*p == '\0')
		return (haystack);
	}

	return (0);
}

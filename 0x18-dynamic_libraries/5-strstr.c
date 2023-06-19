#include "main.h"

/**
 * _strstr - finds substring
 * @haystack: input string
 * @needle: substring to look for
 * Return: pointer to the start of the located substring, else NULL
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}

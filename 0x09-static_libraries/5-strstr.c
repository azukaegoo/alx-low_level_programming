#include "main.h"
/**
 * _strstr - unction finds the first occurrence of the substring needle in the
 * string haystack
 * char *_strstr(char *haystack, char *needle) - function that locates a
 * substring
 * @haystack: parameter name for the string
 * @needle: parameter name for the substring
 * Return: haystack or null
*/
char *_strstr(char *haystack, char *needle)
{

	char *h;
	char *n;

	if (*needle == '\0')
	{
	return (haystack);
	}
	while (*haystack != '\0')
	{
	h = haystack;
	n = needle;
	while (*n != 0 && *h == *n)
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

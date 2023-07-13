#include "main.h"
#include <stdlib.h>
/**
 * count_word - counting the number of words in a string
 * int count_word(char *s) - function definition for counting the number of
 * words in a string
 * @s: parameter name of the string
 * Return: number of words
*/
int count_word(char *s)
{
	int word, a, b;

	word = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	if (s[a] == ' ')
	word = 0;
	else if (word == 0)
	{
		word = 1;
		b++;
	}
	}
	return (b);
}
/**
 * strtow - spliting a string into words
 * char **strtow(char *str) - function definition for spliting a string into
 * words
 * @str: parameter name of the string
 * Return: nothing
*/
char **strtow(char *str)
{
	char **rtow, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	len++;
	words = count_word(str);
	if (words == 0)
	return (NULL);

	rtow = (char **) malloc(sizeof(char *) * (words + 1));
	if (rtow == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
	if (c)
	{
	end = i;
	tmp = (char *) malloc(sizeof(char) * (c + 1));
	if (tmp == NULL)
	return (NULL);
	while (start < end)
	*tmp++ = str[start++];
	*tmp = '\0';
	rtow[j] = tmp - c;
	j++;
	c = 0;
	}
	}
	else if (c++ == 0)
	start = i;
	}
	rtow[j] = NULL;

	return (rtow);
}

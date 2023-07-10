#include "main.h"
/**
 * rev_string - reverses a string
 * void rev_string(char *s) - function for reversing a string
 * @s: parameter character
 * Return: Always 0.
*/
void rev_string(char *s)
{

	int l;
	int st;
	int ed;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	st = 0;
	ed = l - 1;

	while (st < ed)
	{

	char wrd = s[st];

	s[st] = s[ed];
	s[ed] = wrd;
	st++;
	ed--;

	}
}

#include "main.h"
/**
 * _islower -  checks whether c  must have an unsigned char or EOF
 * int _islower(int c) - checking for lowercase characte
 * @c : is what is being checked for lowercase character
 * Return: 1 if the character is a lowercase and 0 for otherwise
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

#include "main.h"
#include <stdio.h>
#define _FILE_
/**
 * main - printing the name of the file
 *
 * Return: Always 0
*/
void print_file_name(void)
{

	char *file_name = __FILE__;
	int i;

	i = 0;

	while (file_name[i] != '\0')
	{
		_putchar(file_name[i]);
		i++;
	}
	{
		_putchar('\n');
	}
}
/**
 * main - printing the name of the file
 *
 * Return: Always 0
*/
int main(void)
{
	print_file_name();
	return (0);
}

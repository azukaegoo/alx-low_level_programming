#include "main.h"
/**
 * print_square - printing a square
 * void print_square(int size) - function definition got printing a square
 * @size: character for size of square
 * Return: Always 0 (Success)
*/
void print_square(int size)
{

	int sq;
	int sql;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (sq = 0 ; sq < size ; sq++)
	{
	for (sql = 0 ; sql < size ; sql++)
	{
		_putchar('#');
	}
	{
		_putchar('\n');
	}
	}
}

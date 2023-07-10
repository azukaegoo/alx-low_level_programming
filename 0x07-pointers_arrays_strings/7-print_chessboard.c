#include "main.h"
/**
 * print_chessboard - printing the chessboard
 * void print_chessboard(char (*a)[8]) - function definition for printing the
 * chessboard
 * @a: parameter name for the fumction
 * Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{

	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
		_putchar(a[i][j]);
	}
		_putchar('\n');
	}
}

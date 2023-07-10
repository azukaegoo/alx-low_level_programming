#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printing the sum of two diagonals square matrix of integers
 * void print_diagsums(int *a, int size) - function defition for printing the
 * sum of two diagonals square matrix of integers
 * @a: first paramter name
 * @size: second paramter name
 * Return: Always 0.
*/
void print_diagsums(int *a, int size)
{

	int i;
	int sumOne = 0;
	int sumTwo = 0;

	for (i = 0; i < size; i++)
	{
		sumOne = sumOne + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumTwo = sumTwo + a[i * size + (size - 1 - i)];
	}
		printf("%d, %d\n", sumOne, sumTwo);
}

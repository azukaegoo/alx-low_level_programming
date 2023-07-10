#include "main.h"
/**
 * reverse_array - printing an array of integers in reverse
 * void reverse_array(int *a, int n) - function defintion for printing the
 * content of an array of integers in reverse
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 * Return: nothing
*/
void reverse_array(int *a, int n)
{

	int fill_in;
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		fill_in = a[first];
		a[first] = a[last];
		a[last] = fill_in;
		first++;
		last--;
	}
}

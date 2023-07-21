#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Printing the numbers
 * @separator: first parameter
 * @n: second parameter
 * @...:third parameter for the number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
}

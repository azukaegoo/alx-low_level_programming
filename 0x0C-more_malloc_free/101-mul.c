#include "main.h"
#include <stdlib.h>
/**
 * is_digit - checks if a character is a digit
 * @c: The character to print
 * Return: On success 0
*/
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * convert_to_int - converting a string to an integer
 * @str: parameter name for the string
 * Return: On success 0
*/
int convert_to_int(char *str)
{
	int num = 0;

	while (*str)
	{
	if (!is_digit(*str))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	num = (num * 10) + (*str - '0');
	str++;
	}
	return (num);
}
/**
 * print_number - printing a number
 * @num: parameter name for integer
 * Return: On success 0
*/
void print_number(int num)
{
	int digits[10], i;

	if (num == 0)
	{
		_putchar('0');
	}

	i = 0;

	while (num > 0)
	{
		digits[i] = num % 10;
		num /= 10;
		i++;
	}

	while (i > 0)
	{
		_putchar(digits[i - 1] + '0');
		i--;
	}
}
/**
 * multiply_numbers - multiplication of two numbers
 * @numOne: first parameter
 * @numTwo: second parameter
 * Return: On success 1
*/
void multiply_numbers(int numOne, int numTwo)
{
	int result;

	result = numOne * numTwo;
	print_number(result);
	_putchar('\n');
}
/**
 * main - checking the number of arguments
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
	return (98);
	}
	num1 = convert_to_int(argv[1]);
	num2 = convert_to_int(argv[2]);
	multiply_numbers(num1, num2);

	return (0);
}

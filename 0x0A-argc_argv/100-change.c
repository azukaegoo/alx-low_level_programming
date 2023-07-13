#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing the minimum number of coins to make change for an amount
 * of money
 * @argc: parameter name for number of arguments
 * @argv: parameter name for array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{

	int num, j, total;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
	return (1);
	}

	num = atoi(argv[1]);
	total = 0;

	if (num < 0)
	{
		printf("0\n");
	return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
	while (num >= coins[j])
	{
		total++;
		num -= coins[j];
	}
	}
	printf("%d\n", total);

	return (0);
}

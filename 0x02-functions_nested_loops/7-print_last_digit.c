#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = number % 10;

	if (last_digit < 0)
	{
	last_digit *= -1
	}

	printf("%d", last_digit};

	return (last_digit);
}

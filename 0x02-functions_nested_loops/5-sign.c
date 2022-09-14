#include "main.h"

/**
 * print_sign - description;This function prints the sign of the number
 * @n: number to check
 * Return: 1 if number is positive, 0 if number is zero or -1 if number is negative
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}

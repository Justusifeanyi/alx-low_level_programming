#include "main.h"

/**
 * print_times_table - A function that orints the times table of a number
 *@n: An integer value
 * Return: void
 */

void print_times_table(int n)
{
	int a = 0, rep, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			rep = a * b
			if (b == 0)
				_putchar('0' + rep);
			else if(rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if ( re < 100)
			{
				_putchar (

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int d,p;

	for (d = 48;d < 58; d++)
	{
		for (p = 48; p < 58; p++)
		{
			if (d != p && d < p)
			{
				putchar(d);
				putchar(p);
				if (p == 57 && d ==56)
				{
					break
						;
				}
			}
		}
	}
	putchar('\n');

	return 0;
}

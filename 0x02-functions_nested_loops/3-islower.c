#include "main.h"

/**
 * _islower - Short description,single line
 * @c: contains value to be compared
 * Return: 1 if it lowercase or 0 if it is uppercase
 */

int _islower(int c)
{
	if ( c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

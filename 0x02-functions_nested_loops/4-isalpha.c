#include "main.h"

/**
 * _isalpha(int c) - funtion returns 1 if c is a letter, lowercase or uppercase.
 * @c: the input character or int to print
 * Return: 1 or 0 in otherwise
 */

int _isalpha(int c)
{
	if ((c > 'a' && < 'z') || (c >'A'; && c < 'Z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}


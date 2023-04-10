#include <stdio.h>

/**
 *_isdigit - if input number return 0
 *@c: input
 *Return: 0 if c number
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

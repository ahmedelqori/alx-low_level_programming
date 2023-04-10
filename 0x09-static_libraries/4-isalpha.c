#include "main.h"

/**
 *_isalpha - check if letter or not
 *@c: input
 * Return: 0 || 1
 */

int _isalpha(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	return (0);
}

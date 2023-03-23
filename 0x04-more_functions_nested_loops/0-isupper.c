#include "main.h"

/**
 * _isupper - check if is upper
 *@c: input
 *Return: 0
 */

int _isupper(int c)
{
	if (c > 96 && c < 120)
	{
		return (0);
	}
	return (1);
}

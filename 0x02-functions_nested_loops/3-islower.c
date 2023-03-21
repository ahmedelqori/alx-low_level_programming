#include "main.h"

/**
 *_islower - check if letter is lower case
 *@c: input
 * Return: 0 || 1
 */

int _islower(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (0);
	}
	return (1);
}

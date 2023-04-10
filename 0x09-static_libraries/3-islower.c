#include "main.h"

/**
 *_islower - check if letter is lower case
 *@c: input
 * Return: 0 || 1
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	return (0);
}

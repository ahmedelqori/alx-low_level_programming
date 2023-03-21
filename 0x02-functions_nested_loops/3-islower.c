#include "main.h"

/**
 *_islower - check if letter is lower case
 *@index: input
 * Return: 0 || 1
 */

int _islower(int index)
{
	if (index >= 65 && index <= 91)
	{
		return (0);
	}
	return (1);
}

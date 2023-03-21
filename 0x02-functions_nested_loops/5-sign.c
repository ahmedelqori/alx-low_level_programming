#include "main.h"

/**
 *print_sign - print sign if n greater or less or equal zero
 *@n: input
 *Return: 1 if + and 0 if 0 and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

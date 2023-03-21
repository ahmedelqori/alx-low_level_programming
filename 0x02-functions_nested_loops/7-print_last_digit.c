#include "main.h"

/**
 *print_last_digit - clear
 *@n : input
 *Return: 0
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= (-1);
	_putchar(n + 48);
	return (n);
}

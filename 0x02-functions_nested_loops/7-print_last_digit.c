#include "main.h"

/**
 *print_last_digit - clear
 *@n : input
 *Return: 0
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n *= (-1);
		x = n % 10;
	}
	else
	{
		x = n % 10;
	}
_putchar(48 + x);
return (x);
}
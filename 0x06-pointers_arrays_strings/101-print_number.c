#include "main.h"

/**
* print_number - cpy string
* @n:input
* Return: char
*/

void print_number(int n)
{
int i;

if (n == 0)
{
_putchar(48 + 0);
}
i = 1;
if (n < 0)
{
n *= -1;
_putchar('-');
}
while (i <= n)
{
i *= 10;
}
i /= 10;
while (n > 0)
{
int j = n / i;

_putchar(48 + j);
n = n % i;
i /= 10;
}
}

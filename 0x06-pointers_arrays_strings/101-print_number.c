#include "main.h"

/**
* print_number - cpy string
* @n:input
* Return: char
*/

void print_number(int n)
{
    int i;

    i = 1;
    if (n < 10)
    {
        n *= -1;
        putchar('-');
    }
    while (i <= n)
    {
        i *= 10;
    }
    i /= 10;
    while (n > 0)
    {
        int j = n / i;
        
        putchar(48 + j);
        n = n % i;
        i /= 10;
    }
}

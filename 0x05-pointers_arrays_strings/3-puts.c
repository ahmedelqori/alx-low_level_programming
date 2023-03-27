#include "main.h"

/**
*_puts - print a string
*@str:input
*Return:void
*/

void _puts(char *str)
{
    int i = 0;

    while (str[i])
    {
        puts(str[i]);
        i++;
    }
}

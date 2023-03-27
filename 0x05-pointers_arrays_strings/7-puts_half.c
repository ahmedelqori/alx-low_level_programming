#include "main.h"

/**
*puts_half - print half of string
*@str:input
*Return: void
*/

void puts_half(char *str)
{
int length = 0;

while (str[length])
{
length++;
}
length /= 2;
while (str[length])
{
_putchar(str[length]);
length++;
}
_putchar('\n');
}

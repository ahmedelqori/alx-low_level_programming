#include "main.h"

/**
 * _memset  - set memory
 * @s:first input
 * @b:second input
 * @n:third input
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

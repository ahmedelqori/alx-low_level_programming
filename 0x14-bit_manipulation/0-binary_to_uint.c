#include "main.h"

/**
* binary_to_uint- converts a binary number to an unsigned int
* @b: first paramter
* Return: unisgned value
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int len = 0, number = 0, power = 1;

while (b[len])
{
if (b[len] != '0' && b[len] != '1')
return (0);
len++;
}
for (int i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
number += power;
power *= 2;
}
return (number);
}

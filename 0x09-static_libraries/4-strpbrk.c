#include "main.h"

/**
 * _strpbrk - set memory
 * @s:first input
 * @accept:second input
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;

i = 0;
while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
return (NULL);
}

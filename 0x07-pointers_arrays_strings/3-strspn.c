#include "main.h"

/**
 * _strspn - set memory
 * @s:first input
 * @accept:second input
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
int result = 0;

int i = 0;

while (s[i])
{
int j = 0;

int check = -1;

while (accept[j])
{
if (accept[j] == s[i])
{
check = 1;
result++;
break;
}
j++;
}
if (check == -1)
{
return (result);
}
i++;
}
return (result);
}

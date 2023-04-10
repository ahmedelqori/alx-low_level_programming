#include "main.h"

/**
* _strcmp - cpy string
* @s1:input
* @s2:input
* Return: char
*/

int _strcmp(char *s1, char *s2)
{
int res, i;

res = 0;
i = 0;
while (s1[i] && s1[i] == s2[i])
{
i++;
}
res = s1[i] - s2[i];
return (res);
}

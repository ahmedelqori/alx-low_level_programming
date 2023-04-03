#include "main.h"

/**
 * _strchr  - set memory
 * @s:first input
 * @c:second input
 * Return: char
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i])
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return NULL;
}

#include "main.h"

/**
 * _strchr  - set memory
 * @s:first input
 * @c:second input
 * Return: char
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}

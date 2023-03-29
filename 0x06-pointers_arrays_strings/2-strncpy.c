#include "main.h"

/**
* _strncat - append string
* @dest:input
* @src:input
* @n:input
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (dest[i] && i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

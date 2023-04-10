#include "main.h"

/**
* _strncat - append string
* @dest:input
* @src:input
* @n:input
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
int length, i;

length = 0;
while (dest[length])
{
length++;
}
i = 0;

while (src[i] && i < n)
{
dest[length + i] = src[i];
i++;
}
return (dest);
}

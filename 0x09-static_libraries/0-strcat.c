#include "main.h"

/**
* _strcat - append string
* @dest:input
* @src:input
* Return: char*
*/

char *_strcat(char *dest, char *src)
{
int length, i;

length = 0;

while (dest[length])
{
length++;
}
i = 0;
while (src[i])
{
dest[i + length] = src[i];
i++;
}
return (dest);
}

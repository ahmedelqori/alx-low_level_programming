#include "main.h"

/**
 * _memcpy  - set memory
 * @dest:first input
 * @src:second input
 * @n:third input
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

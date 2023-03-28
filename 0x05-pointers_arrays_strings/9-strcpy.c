#include "main.h"

/**
* _strcpy - string copy
* @dest: first input
* @src: second input
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
int length;

length = 0;
while (src[length])
{
dest[length] = src[length];
length++;
}
return (dest);
}
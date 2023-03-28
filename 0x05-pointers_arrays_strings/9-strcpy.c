#include "main.h"

/**
* _strcpy - string copy
* @dest: first input
* @src: second input
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
int i, length;
for (length = 0; src[length] != '\0'; length++)
{
}
for (i = 0; i <= length ; i++)
{
dest[i] = src[i];
}
return (dest);
/**
int length;

length = 0;
while (src[length])
{
dest[length] = src[length];
length++;
}
return (dest);
*/
}

#include "main.h"

/**
 * _strstr - set memory
 * @haystack:first input
 * @needle:second input
 * Return: int
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0 ;

while (haystack[i])
{
if(needle[0] == haystack[i])
{
return (needle);
}
i++;
}
return (NULL);
}
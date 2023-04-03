#include "main.h"

/**
 * _strstr - set memory
 * @haystack:first input
 * @needle:second input
 * Return: int
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

i = 0;
while (haystack[i])
{
if (needle[0] == haystack[i]){
break;
}
i++;
}
j = 0;
while (needle[j])
{
if (haystack[i] != needle[j])
{
return (NULL);
}
i++;
j++;
}
return (needle);
}

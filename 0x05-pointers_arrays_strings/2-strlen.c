#include "main.h"

/**
*_strlen - length of string
*@s: string
*Return:number
*/

int _strlen(char *s)
{
int i = 0;

while (s[i])
{
i++;
}
return (i);
}

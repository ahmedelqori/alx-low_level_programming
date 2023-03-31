#include "main.h"

/**
* cap_string - Upper String
* @str:input
* Return: char*
*/

char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (str[i - 1] == '\n' || 
str[i - 1] == ' ' || str[i - 1] == '.'
|| str[i - 1] == '\t')
{
char leL = 'a';

char leU = 'A';

while (leL <= 'z')
{
if (str[i] == leL)
{
str[i] = leU;
}
leU++;
leL++;
}
}
}
i++;
}
return (str);
}

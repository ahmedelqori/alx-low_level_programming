#include "main.h"

/**
* string_toupper - Upper String
* @str:input
* Return: char*
*/

char *string_toupper(char *str)
{
char alphabetUpper[] =   "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char alphabetLower[] = "abcdefghijklmnopqrstuvwxyz";

int i = 0;

while (str[i])
{
int j = 0;

while (alphabetLower[j])
{
if (alphabetLower[j] == str[i])
{
str[i] = alphabetUpper[j];
}
j++;
}
i++;
}
return (str);
}

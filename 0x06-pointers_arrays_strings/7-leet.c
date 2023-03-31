#include "main.h"
#include <stdio.h>

/**
 * leet - translate
 *@s:input
 * Return: Void
 */
char *leet(char *s)
{
char *lettersL = "aeotl";

char *lettersU = "AEOTL";

char numbers[] = "43071";

int i = 0;

while (s[i])
{
int j = 0;

while (lettersL[j])
{
if (s[i] == lettersL[j] || s[i] == lettersU[j])
{
s[i] = numbers[j];
break;
}
j++;
}
i++;
}
return (s);
}

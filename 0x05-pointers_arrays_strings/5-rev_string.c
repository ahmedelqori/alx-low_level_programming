#include "main.h"

/**
*rev_string - reverse a string
*@s: input
*Return: void
*/

void rev_string(char *s)
{
int length = _strlen(s);

for (int i = 0; i < (length / 2); i++)
{
char tmp = s[length-1 -i];

s[length-1 -i] = s[i];
s[i] = tmp;
}
}
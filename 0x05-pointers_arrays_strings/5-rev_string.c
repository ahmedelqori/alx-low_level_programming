#include "main.h"

/**
*rev_string - reverse a string
*@s: input
*Return: void
*/

void rev_string(char *s)
{
int length = _strlen(s);

int i = 0;

while (i < (length / 2))
{
char tmp = s[length-1 -i];

s[length-1 -i] = s[i];
s[i] = tmp;
i++;
}
}
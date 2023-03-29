#include "main.h"

/**
* _strcmp - cpy string
* @a:input
* @n:input
* Return: char
*/

void reverse_array(int *a, int n)
{
int i, j;

i = 0;
while (a[i])
{
    i++;
}
for (j = 0 ; j < (i / 2); j++)
{
int tmp = a[j];

a[j] = a[i-1-j];
a[i-1-j] = tmp;
}
}

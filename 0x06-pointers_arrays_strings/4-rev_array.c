#include "main.h"

/**
* reverse_array - cpy string
* @a:input
* @n:input
* Return: char
*/

void reverse_array(int *a, int n)
{
int j;

for (j = 0 ; j < (n / 2); j++)
{
int tmp = a[j];

a[j] = a[n - 1 - j];
a[n - 1 - j] = tmp;
}
}

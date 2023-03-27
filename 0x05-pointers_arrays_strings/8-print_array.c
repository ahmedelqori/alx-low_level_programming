#include "main.h"

/**
*print_array - print an array
*@a: first input
*@n: second input
*Return : void;
*/
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i != n - 1)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
}

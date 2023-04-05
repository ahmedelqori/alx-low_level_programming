#include "main.h"

/**
 * _print_rev_recursion - puts word  reverse with recursion
 * @s: input;
 * Return : void
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

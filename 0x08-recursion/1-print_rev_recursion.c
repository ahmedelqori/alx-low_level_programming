#include "main.h"

/**
 * _print_rev_recursion -  print string reverese
 * @s : string
 * Return : void
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0') return;
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
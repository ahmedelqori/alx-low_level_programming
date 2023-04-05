#include "main.h"

/**
 * _puts_recursion - puts word with recursion
 * @s: input;
 * Return : void
 */

void _puts_recursion(char *s)
{
if (s[0])
{
printf("%c", s[0]);
_puts_recursion(s + 1);
}
if (s[0] == '\0')
{
_putchar('\n');
}
}

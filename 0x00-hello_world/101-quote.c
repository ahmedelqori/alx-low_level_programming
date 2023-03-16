#include <stdio.h>
#include <unistd.h>
/**
 * main - without puts and printf
 * Return: 1
 */

int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, text, sizeof(text) - 1);
return (1);
}

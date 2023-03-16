#include <stdio.h>
#include <unistd.h>
int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDOUT_FILENo, text, sizeof(text) - 1);
return (1);
}

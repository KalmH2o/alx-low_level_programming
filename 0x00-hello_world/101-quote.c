#include <stdio.h>
#include <unistd.h>
/**
*main - Output to standard error
*Return: Always 0 (Success)
**/
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

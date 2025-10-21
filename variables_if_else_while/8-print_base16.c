#include <stdio.h>
/**
*main - Entry point
*print alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
int i = '0';
int o = 'a';
while (i <= '9')
{
putchar(i);
i++;
}
while (o <= 'f')
{
putchar(o);
o++;
}
putchar('\n');
return (0);
}

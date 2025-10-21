#include <stdio.h>
/**
*main - Entry point
*print alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
char i = 'a';
char o = 'A';
while (i <= 'z')
{
putchar(i);
i++;
}
while (o <= 'Z')
{
putchar(o);
o++;
}
putchar('\n');
return (0);
}

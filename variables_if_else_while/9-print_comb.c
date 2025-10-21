#include <stdio.h>
/**
*main - Entry point
*print alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
if (i <= '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

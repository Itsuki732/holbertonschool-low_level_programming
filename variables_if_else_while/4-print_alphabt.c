#include <stdio.h>
/**
*main - Entry point
*print alphabet except q and e
*Return: Always 0 (Success)
*/
int main(void)
{
char i = 'a';
while (i <= 'z')
{
if (i != 'e' && 'q' )
{
putchar(i);
i++;
}
else
{
i++;
}
}
putchar('\n');
return (0);
}

#include "main.h"

/**
* print_alphabet - Entry point
* prints the alphabet, in lowercase
* Return: always 0 (Succes)
*/

void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
return;
}

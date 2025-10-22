#include "main.h"

/**
* print_alphabet_x10 - Entry point
* prints 10 times the alphabet
* Return: always 0 (Succes)
*/

void print_alphabet_x10(void)
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

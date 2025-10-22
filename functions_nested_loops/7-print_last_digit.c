#include "main.h"

/**
* print_last_digit - Entry point
* @i: character to check
*
* Return: last digit
*
*/

int print_last_digit(int i)
{
long o = (long)i;
if (o < 0)
o = (o * (-1));
o = o % 10;
_putchar (o + '0');
return (o);
}

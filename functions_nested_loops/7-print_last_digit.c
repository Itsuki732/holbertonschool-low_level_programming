#include "main.h"

/**
* print_last_digit - Entry point
* @i: character to check
*
* Return: unsigne i
*
*/
/**
* _abs - Entry point
* @i: character to check
*
* Return: unsigne i
*
*/

int print_last_digit(int i)
{
if (i < 0)
i = (i * (-1));
i = i % 10;
_putchar (i + '0');
return (i);
}

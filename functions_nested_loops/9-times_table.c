#include "main.h"

/**
* times_table - Entry point
*
* i: premier chifffre de la multiplication
* o: deuxième chifffre de la multiplication
* r: résultat de la multiplication
*
*return (0)
*/

void times_table(void)
{
int i;
int o;
int r;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (o = 1; o <= 9; o++)
{
_putchar(',');
_putchar(' ');
r = i * o;
if (r <= 9)
_putchar(' ');
else
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
_putchar('\n');
}
return;
}

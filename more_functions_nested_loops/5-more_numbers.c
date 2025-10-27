#include "main.h"

/**
* more_numbers - Écrivez une fonction qui affiche 10 fois les nombres,
*de 0 à 14, suivis d'un saut de ligne.
*r: repétition
*n: numbers
*
*/

void more_numbers(void)
{
int n;
int u;

for (n = 0; n <= 9; n++)
{
	for (u = 0; u <= 14; u++)
	{
	if (u > 9)
	{
		_putchar((u / 10) + '0');
	}
	_putchar((u % 10) + '0');
	}
	_putchar('\n');
}
}

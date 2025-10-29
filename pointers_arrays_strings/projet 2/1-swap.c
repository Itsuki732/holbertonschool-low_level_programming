#include "main.h"

/**
*swap_int - main entry
*@a: première int
*@b: seconde int
*
*Écrivez une fonction qui échange les valeurs de deux entiers.
*/

void swap_int(int *a, int *b)
{
	int i = 0;

	i = *b;
	*b = *a;
	*a = i;
}

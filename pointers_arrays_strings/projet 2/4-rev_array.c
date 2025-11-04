#include "main.h"

/**
*reverse_array - une fonction qui inverse le contenu d'un tableau d'entiers.
*@a: don't know
*@n:number of elements of the array
*
*Return: a
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int o;

	for (i = n - 1; i >= n / 2; i--)
	{
		o = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = o;
	}
}

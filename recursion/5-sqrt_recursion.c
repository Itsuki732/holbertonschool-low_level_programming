#include "main.h"

/**
*_fonct_aux - Fonction auxiliaire pour trouver la racine carrée naturelle.
*@n: Le nombre pour lequel on cherche la racine carrée.
*@k: Le candidat actuel pour la racine carrée.
*
*Return: La racine carrée naturelle si elle existe, sinon -1.
*/

int _fonct_aux(int n, int k)
{
if (k * k == n)
{
	return (k);
}
if (k * k > n)
{
	return (-1);
}
return (_fonct_aux(n, k + 1));
}

/**
* _sqrt_recursion - Trouve la racine carrée naturelle d'un nombre.
*@n: Le nombre pour lequel on cherche la racine carrée.
*
*Return: La racine carrée naturelle si elle existe, sinon -1.
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_fonct_aux(n, 1));
}

#include "main.h"

/**
*nb_premier - Fonction auxiliaire pour vérifier la primalité.
*@n: Le nombre à vérifier.
*@i: Le diviseur actuel.
* *
*Return: 1 si n est premier, sinon 0.
*/

int nb_premier(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
return (nb_premier(n, i + 1));
}

/**
*is_prime_number - Vérifie si un nombre est premier.
*@n: Le nombre à vérifier.
*
*Return: 1 si n est premier, sinon 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
return (nb_premier(n, 2));
}

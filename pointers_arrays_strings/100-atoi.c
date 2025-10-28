#include "main.h"

/**
*_atoi - entry point
*@s:
*
*Écrivez une fonction qui convertit une chaîne en entier.
*
*le nb dans la chaîne peut être précédé d'un nombre infini de caractères.
*Vous devez tenir compte de tous les signes - et + avant le nombre.
*Si la chaîne ne contient aucun nombre, la fonction doit renvoyer 0.
*Vous n'êtes pas autorisé:
*- à utiliser long.
*- à déclarer de nouvelles variables de type tableau.
*- à coder en dur des valeurs spéciales.
*Nous utiliserons l'option gcc -fsanitize=signed-integer-overflow
*pour compiler votre code.
*
*Return: result
*/

int _atoi(char *s)
{
int index = 0;
int res = 0;
int compteur = 0;
int sign = 1;
int first = -1;
int last = -1;
int i;

/* Trouver le premier chiffre */
while (s[index] != '\0')
{
	if (s[index] >= '0' && s[index] <= '9')
		{
		first = index;
		break; }
	index++; }
	/* Si aucun chiffre trouvé */
	if (first == -1)
		return (0);
	/* Trouver le dernier chiffre à partir de first */
	index = first;
	while (s[index] >= '0' && s[index] <= '9')
	{
	last = index;
	index++; }
	/* Compter les '-' avant le premier chiffre */
	for (index = 0; index < first; index++)
	{
		if (s[index] == '-')
		compteur++; }
	if (compteur % 2 != 0)
	sign = -1;
	/* Construire le nombre */
	for (i = first; i <= last; i++)
	res = res * 10 + (s[i] - '0');
	return (res * sign);
}

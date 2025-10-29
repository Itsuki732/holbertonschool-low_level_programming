#include "main.h"

/**
*_strlen - main entry
*@s: première int
*
*Écrivez une fonction qui renvoie la longueur d’une chaîne.
*
*Return: longueur de chaine
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	i++;

	return (i);
}

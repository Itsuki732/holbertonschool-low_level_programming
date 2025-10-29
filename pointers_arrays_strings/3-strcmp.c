#include "main.h"

/**
*_strcmp - fonction qui copie une chaîne.
*@s1: destination
*@s2: second char
*
*Écrivez une fonction qui compare deux chaînes.
*
*Return: dest
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
return (*s1 - *s2);
}

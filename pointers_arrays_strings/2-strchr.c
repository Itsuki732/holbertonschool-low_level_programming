#include "main.h"

/**
*_strchr - Localise un caractère dans une chaîne de caractères
*@s: la chaîne à analyser
*@c: le caractère à rechercher
*
*Écrivez une fonction qui localise un caractère dans une chaîne.
*
*Return: un pointeur vers la première occurrence du caractère c
*dans la chaîne s, ou NULL si le caractère n’est pas trouvé
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
return (NULL);
}

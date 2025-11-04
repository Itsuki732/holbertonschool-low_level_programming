#include "main.h"

/**
*_strcat - Écrivez une fonction qui concatène deux chaînes.
*@dest: rrrr
*@src: rrrr
*
*Cette fonction ajoute la chaîne src à la chaîne dest, écrasant l'octet
*nul de fin (\0) à la fin de dest, puis ajoute un octet nul de fin.
*Renvoie un pointeur vers la chaîne résultante dest.
*
*Return: chaine dans dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int o = 0;

	while (dest[i++])
	{
		o++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[o++] = src[i];
	}

	return (dest);
}

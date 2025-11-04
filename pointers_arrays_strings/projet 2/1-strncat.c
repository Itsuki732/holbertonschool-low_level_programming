#include "main.h"

/**
*_strncat - main entry
*@dest: première int
*@src: seconde int
*@n: troisième
*
*Écrivez une fonction qui concatène deux chaînes.
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int o = 0;

	while (dest[i++])
	o++;

	for (i = 0; src[i] && i < n; i++)
	dest[o++] = src[i];

return (dest);
}

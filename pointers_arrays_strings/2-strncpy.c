#include "main.h"

/**
*_strncpy - fonction qui copie une chaîne.
*@dest: destination
*@src: second char
*@n: troisième
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (;i < n; i++)
	{
		dest[i] = '\0';
	}

return (dest);
}

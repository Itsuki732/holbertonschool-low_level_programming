#include "main.h"

/**
* _strcat - Entry point
*
*
* Return:
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

	return(dest);
}

#include "main.h"
#include <stdlib.h>

/**
*_strdup - return a pointer to a newly allocated space with
* a copy of the str given as parameter
* @str: The string to copy
* Return: a pointer to the allocated space
*/

char *_strdup(char *str)
{
	char *dup;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	dup[i] = '\0';

return (dup);
}

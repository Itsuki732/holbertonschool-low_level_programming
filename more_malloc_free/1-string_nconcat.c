#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings up to n bytes of the second string
*@s1: first string
*@s2: second string
*@n: number of bytes from s2 to concatenate
*Return: pointer to the newly allocated space in memory containing the
*        concatenated string or NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int index1 = 0;
	unsigned int index2 = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int size3 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
	if (n >= size2)
		size3 = size2;
	else
		size3 = n;
	new_str = malloc(sizeof(char) * (size1 + size3 + 1));

	if (new_str == NULL)
		return (NULL);
	for (index1 = 0; s1[index1] != '\0'; index1++)
		new_str[index1] = s1[index1];
	for (index2 = 0; index2 < size3; index2++)
		new_str[index1 + index2] = s2[index2];
	new_str[size1 + size3] = '\0';

return (new_str);
}

#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of integers
*@min: minimum value of the range
*@max: maximum value of the range
*Return: pointer to the newly created array, or NULL if it fails
*        or if min is greater than max
*/

int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
	return (NULL);

ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
	return (NULL);

for (i = 0; i < (max - min + 1); i++)
	ptr[i] = min + i;

return (ptr);
}

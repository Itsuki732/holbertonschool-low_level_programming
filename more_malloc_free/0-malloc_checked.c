#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - allocates memory using malloc
*@b: The size of the memory to allocate
*Return: a pointer to the allocated space
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

return (ptr);
}

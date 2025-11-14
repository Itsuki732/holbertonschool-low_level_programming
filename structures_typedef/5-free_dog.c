#include "dog.h"
#include <stdlib.h>

/**
*free_dog - Frees a dog structure
*@d: Pointer to the dog structure to free
*
*This function frees the memory allocated for the name and owner
*strings of the dog structure, and then frees the structure itself.
*It is important to ensure that the pointer is not NULL before freeing.
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

#include "dog.h"
#include <stdlib.h>

/**
*init_dog - Initializes a dog structure
*@d: Pointer to the dog structure to initialize
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner of the dog
*This function initializes the members of the dog structure
*with the provided values.
*Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;

}

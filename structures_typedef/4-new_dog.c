#include "dog.h"
#include <stdio.h>

/**
*_strlen - calcule la longueur d'une chaîne
*@s: chaîne de caractères
*Return: longueur de la chaîne
*/

unsigned int _strlen(char *s)
{
unsigned int len = 0;

while (s[len] != '\0')
	len++;
return (len);
}

/**
*new_dog - Creates a new dog structure
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner of the dog
*This function allocates memory for a new dog structure,
*initializes its members with the provided values, and returns
*a pointer to the newly created dog structure.
*
*Return: Pointer to the newly created dog structure, or NULL on failure.
*/

dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *dog;
char *name_copy, *owner_copy;
unsigned int i;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
	return (NULL);
}
name_copy = malloc(_strlen(name) + 1);
if (name_copy == NULL)
{
	free(dog);
	return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
{
name_copy[i] = name[i];
}
name_copy[i] = '\0';
owner_copy = malloc(_strlen(owner) + 1);
if (owner_copy == NULL)
{
	free(name_copy);
	free(dog);
	return (NULL);
}
for (i = 0; owner[i] != '\0'; i++)
{
owner_copy[i] = owner[i];
}
owner_copy[i] = '\0';
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}

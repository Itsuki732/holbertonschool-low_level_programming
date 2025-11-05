#include "main.h"

/**
* _strlen_recursion - Calcule la longueur d'une chaîne de caractères
*de façon récursive.
*@s: Pointeur vers la chaîne de caractères.
*
*Return: La longueur de la chaîne (int).
*/

int _strlen_recursion(char *s)
{

if (*s == '\0')
	return (0);
else
	return (1 + _strlen_recursion(s + 1));
}

#include "main.h"

/**
*print_line - entry point
*@n:nombre de caractère à afficher
*
*Écrivez une fonction qui trace une ligne droite dans le terminal.
*
*Prototype : void print_line(int n);
*Vous ne pouvez utiliser que la fonction _putchar pour afficher.
*Où n est le nombre de fois où le caractère _ doit être affiché.
*La ligne doit se terminer par un \n.
*Si n est inférieur ou égal à 0, la fonction doit uniquement afficher \n.
*
*/


void print_line(int n)
{
int i;
i = 0;
while (i < n)
{
	_putchar('_');
	i++;
}
_putchar('\n');
}

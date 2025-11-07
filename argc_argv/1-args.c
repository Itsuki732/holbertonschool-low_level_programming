#include <stdio.h>

/**
* main - Entry point
* @argc: Nombre d'arguments passés au programme
* @argv:
* Prints its name, followed by a new line.
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (0);
}

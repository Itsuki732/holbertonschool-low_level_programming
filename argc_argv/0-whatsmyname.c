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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}

#include <stdio.h>
#include <stdlib.h>

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
	int j;
	int r;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	r = i * j;

	printf("%d\n", r);
return (0);
}

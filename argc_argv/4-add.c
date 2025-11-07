#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: Nombre d'arguments passés au programme
* @argv:
* Prints its name, followed by a new line.
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{

int index, check;
	int sum = 0;

	for (index = 1; index < argc; index++)
	{
		for (check = 0; argv[index][check] != '\0'; check++)
		{
			if (!isdigit(argv[index][check]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[index]);

	}

	printf("%d\n", sum);

	return (0);

}

#include "main.h"

/**
* print_rev -Entry point
* @s: string
* Return: Always 0
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}

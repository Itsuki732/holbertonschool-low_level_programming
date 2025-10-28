#include "main.h"

/**
* puts_half - Entry point
* @str: chaine de character
* Return:
*/

void puts_half(char *str)
{
	int i; /*long ligne*/
	int o; /*position ligne*/
	int p; /*midle ligne*/

	while (str[o++])
	{
		i++;
	}

	p = i / 2;

	for (o = p; o < i; o++)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}


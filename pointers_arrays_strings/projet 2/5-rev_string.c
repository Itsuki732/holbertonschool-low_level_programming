#include "main.h"

/**
* rev_string -Entry point
* @s: string
* Return: Always 0
*/

void rev_string(char *s)
{
	int u;
	int i;
	int o = 0;
	int p = 0;

	while (s[o] != '\0')
	{
		o++;
	}
	u = o - 1;

	while (p < u)
	{
		i = s[p];
		s[p] = s[u];
		s[u] = i;
		p++;
		u--;
	}
}

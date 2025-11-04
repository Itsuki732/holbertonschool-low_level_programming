#include "main.h"

/**
*_memset - main entry
*@s: target
*@b: constant byte
*@n: number of byte
*
*Écrivez une fonction qui remplit la mémoire avec un octet constant.
*
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
return (s);
}

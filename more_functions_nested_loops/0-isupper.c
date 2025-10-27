#include "main.h"

/**
* _isupper - Entry point
* @c: character to check
*
* Return: 1*0 if c is lowercase, 1 otherwise
*
*/

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
		{
		return (1);
	}
	return (0);
}

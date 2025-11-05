#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse using recursion
*@s: Pointer to the string to be printed in reverse
*
* Description: This function uses recursion to traverse the string to
*the end, then prints each character on the way back,
*effectively printing the string in reverse.
*/

void _print_rev_recursion(char *s)
{
	if (*s > 0)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

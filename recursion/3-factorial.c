#include "main.h"

/**
*factorial - Calculates the factorial of a given number.
*@n: The number for which the factorial is to be calculated.
*
*Return: The factorial of the number, or -1 if the input is invalid.
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 1 || n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

#include "3-calc.h"

/**
*op_add - Selects the correct function to perform the operation
*@a: The first integer
*@b: The second integer
*Return: The result of the addition
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - Subtracts two integers
*@a: The first integer
*@b: The second integer
*Return: The result of the subtraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - Multiplies two integers
*@a: The first integer
*@b: The second integer
*Return: The result of the multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - Divides two integers
*@a: The first integer
*@b: The second integer
*Return: The result of the division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - Computes the modulus of two integers
*@a: The first integer
*@b: The second integer
*Return: The result of the modulus operation
*/

int op_mod(int a, int b)
{
	return (a % b);
}

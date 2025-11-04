#include "main.h"

/**
*print_chessboard - Prints the chessboard.
*@a: 2D array representing the chessboard (8x8).
*
*Description: This function prints an 8x8 chessboard,
*where each character in the array is printed,
*followed by a new line after each row.
*
*Return: void
*/

void print_chessboard(char (*a)[8])
{
int index = 0;
int check = 0;

	for (index = 0; index < 8; index++)
	{
		for (check = 0; check < 8; check++)
		{
			_putchar(a[index][check]);
		}
		_putchar('\n');
	}
}
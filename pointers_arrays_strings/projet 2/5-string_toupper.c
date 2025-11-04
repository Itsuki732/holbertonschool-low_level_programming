#include "main.h"

/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@string: chaine de caracère
*
*code ASCII minuscule : 97 -> 122
*code ASCI majuscule : 65 -> 90
*différence est de 32
*
*Return: string
*/

char *string_toupper(char *string)

{
int i = 0;/*position sur la chaine de caractère*/



while (string[i] != '\0')
{
if (string[i] >= 'a' &&  string[i] <= 'z')
	{
	string[i] -= 32;
	}
	i++;
}
return (string);
}

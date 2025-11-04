#include "main.h"

/**
*leet - main entry
*@str: string
*
*Écrivez une fonction qui encode une chaîne en 1337.
*
*Les lettres a et A doivent être remplacées par 4
*Les lettres e et E doivent être remplacées par 3
*Les lettres o et O doivent être remplacées par 0
*Les lettres t et T doivent être remplacées par 7
*Les lettres l et L doivent être remplacées par 1
*
*Return: leet
*/


char *leet(char *str)

{
char Maj[] = "AEOLT"; /*chaine des majuscules*/
char Min[] = "aeolt"; /*chaine des minuscules*/
char chif[] = "43017"; /*chaine des chiffres*/
int index = 0;/*position sur la chaine de caractère*/
int i;

while (str[index] != '\0')
{
	for (i = 0; i < 5; i++)
	{
		if (str[index] == Maj[i] || str[index] == Min[i])
		{
		str[index] = chif[i];
		break;
		}
	}
	index++;
}
return (str);
}

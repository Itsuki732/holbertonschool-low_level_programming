#include "main.h"

/**
*cap_string - entry
*@string: chaine de caracère
*
*code ASCII minuscule : 97 -> 122
*code ASCI majuscule : 65 -> 90
*différence est de 32
*
*Return: string
*/

char *cap_string(char *string)

{
int i = 0;

while (string[i] != '\0')
{
	if (string[0] >= 'a' &&  string[0] <= 'z')
	{
		string[i] -= 32;
	}

	if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n' ||
	string[i] == ',' || string[i] == ';' || string[i] == '.' ||
	string[i] == '!' || string[i] == '?' || string[i] == '"' ||
	string[i] == '(' || string[i] == ')' || string[i] == '{' ||
	string[i] == '}')
	{
		if (string[i + 1] >= 'a' &&  string[i + 1] <= 'z')
		{
			string[i + 1] -= 32;
		}
	}
	i++;
}
return (string);
}

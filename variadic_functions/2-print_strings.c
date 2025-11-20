#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - print all strings in a list
*
* @separator: Use to separate strings
* @n: strings of the list
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);


	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			char* strings = va_arg(ap, char*);

			if (strings != NULL)
			{
				printf("%s", strings);
			}
			else
			{
				printf("(nil)");
			}

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			char* strings = va_arg(ap, char*);

			printf("%s", strings);
		}
	}
	printf("\n");
va_end(ap);
}

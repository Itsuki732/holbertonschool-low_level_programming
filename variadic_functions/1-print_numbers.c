#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - print all numbers in a list
*
* @separator: Use to separate numbers
* @n: Number of the list
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int number = va_arg(ap, int);

		printf("%d", number);

		if (i < n - 1)
		{
			printf("%s", separator);
		}

	}

	printf("\n");

va_end(ap);
}

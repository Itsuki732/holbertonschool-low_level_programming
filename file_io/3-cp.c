#include "main.h"

/**
 * error_exit - prints an error message to stderr and exits with a code
 * @code: exit code
 * @format: message format
 * Return: nothing
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}


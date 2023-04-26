#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: Returns the number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += printf_cases(format, ap);
		}
		else
			len += write(STDOUT_FILENO, &(*format), 1);
		format++;
	}
	return (len);
}

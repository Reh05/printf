#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: Returns the number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'c' ||
					*(format + 1) == 's' ||
					*(format + 1) == '%' ||
					*(format + 1) == 'i'))
		{
			format++;
			switch (*format)
			{
				case 'c':
						len += printc(va_arg(ap, int));
						break;
				case 's':
						len += print_string(va_arg(ap, char *));
						break;
				case '%':
						len += printc('%');
						break;
				default:
						len += write(STDOUT_FILENO, format, 1);
						break;
			}
		}
		else
			len += write(STDOUT_FILENO, format, 1);
		format++;
	}
	va_end(ap);
	return (len);
}

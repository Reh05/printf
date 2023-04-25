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
			switch (*format)
			{
				case 'c':
						len += printc(va_arg(ap, int));
						break;
				case 's':
						len += print_string(va_arg(ap, char *));
						break;
				case 'i':
				case 'd':
						len += print_num(va_arg(ap, int));
						break;
				case '%':
						len += printc('%');
						break;
				case '\0':
						return (-1);
				default:
						len += printc('%');
						len += write(STDOUT_FILENO, &(*format), 1);
						break;
			}
		}
		else
			len += write(STDOUT_FILENO, &(*format), 1);
		format++;
	}
	return (len);
}

#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * printf_cases - handles different print cases of prinf function
 * @format: format specifier
 * @ap: arguments parameters passed
 *
 * Return: Returns number of characters printed
 */
int printf_cases(const char *format, va_list ap)
{
	int len = 0;

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
		case 'b':
			len += int_to_binary(va_arg(ap, unsigned int));
			break;
		case '\0':
			return (-1);
		default:
			len += printc('%');
			len += write(STDOUT_FILENO, &(*format), 1);
			break;
	}
	return (len);
}

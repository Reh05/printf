#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);
int printc(const char c);
int print_string(const char *str);
int print_num(long int num);
int printf_cases(const char *format, va_list ap);
/**
 * int_to_binary - converts intergers to binary
 * @num: number to be converted
 *
 * Return: returns the number of characters printed
 */
int int_to_binary(unsigned int num);

#endif

#include <stdlib.h>
#include <unistd.h>
/** This file contains functions that prints strings **/

/**
 * print_string - prints a given string
 * @str: string to be printed
 *
 * Return: Returns the number of strings printed
 */
int print_string(char *str)
{
	int len = 0;
	int i = 0;
	char *null_string = "(null)";

	if (str == NULL)
		return (print_string(null_string));

	while (str[i] != '\0')
	{
		len += write(1, &str[i], 1);
		i++;
	}

	return (len);
}

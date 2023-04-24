#include <stdlib.h>
#include <unistd.h>
/** This file contains functions that prints strings **/

/**
 * print_string - prints a given string
 * @str: string to be printed
 *
 * Return: Returns the number of strings printed
 */
ssize_t print_string(const char *str)
{
	const char *null_string = "(null)";
	ssize_t len = 0;
	ssize_t ret;

	if (str == NULL)
	{
		str = null_string;
	}
	while (*str != '\0')
	{
		ret = write(STDOUT_FILENO, str++, 1);
		if (ret == -1)
		{
			return (-1);
		}
		len += ret;
	}
	if (ret == -1)
	{
		return (-1);
	}
	len += ret;
	return (len - 1);
}

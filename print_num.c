#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/** This file contains functions that prints numbers **/

/**
 * print_num - prints a given string
 * @num: string to be printed
 *
 * Return: Returns the number of numbers printed
 */
int print_num(int num)
{
	char str[20];
	int i = 0;
	int count = 0;

	if (num < 0)
	{
		str[i++] = '-';
		num = -num;
		count++;
	}
	do {
		str[i++] = num % 10 + '0';
		num /= 10;
		count++;
	} while (num > 0);

	while (i > 0)
	{
		write(1, &str[--i], 1);
	}
	return (count);
}

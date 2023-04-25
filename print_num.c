#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * print_num - prints a given number
 * @num: number to be printed
 *
 * Return: Returns the number of numbers printed
 */
int print_num(long int num)
{
	char str[20];
	int i = 0;
	int count = 0;
	char c = '-';

	if (num < 0)
	{
		write(1, &c, 1);
		count++;
		num = -num;
	}
	else if (num == 0)
	{
		str[i++] = '0';
		count++;
	}

	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i > 0)
	{
		write(STDOUT_FILENO, &str[--i], 1);
		count++;
	}
	return (count);
}

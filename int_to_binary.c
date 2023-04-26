#include <stdlib.h>
#include "main.h"
/**
 * int_to_binary - converts intergers to binary
 * @num: number to be converted
 *
 * Return: returns the number of characters printed
 */
int int_to_binary(unsigned int num)
{
	int rem = 0, array_size = 0, *binary, count = 0;
	int temp = num;

	if (num == 0)
	{
		count += printc(num + '0');
		return (1);
	}
	while (temp != 0)
	{
		array_size++;
		temp /= 2;
	}
	binary = malloc(sizeof(int) * array_size);
	rem = array_size - 1;
	while (rem >= 0)
	{
		*(binary + rem) = num % 2;
		num /= 2;
		rem--;
	}
	for (rem = 0; rem < array_size; rem++)
	{
		int bin = binary[rem];

		printc(bin + '0');
		count++;
	}
	free(binary);
	return (count);
}

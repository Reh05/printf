/**
 * print_int - prints a given interger with the appropriate format
 * @num: interger to be printed
 *
 * Return: Returns the interger of characters printed
 */
int print_int(long int num)
{
	char str[20];
	int i = 0;
	int count = 0;
	int neg = 0;
	char sign = '\0';
	int base = 10;
	char prefix = '\0';

	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	if (format_specifier == 'o')
	{
		base = 8;
		prefix = '0';
	}
	else if (format_specifier == 'x' || format_specifier == 'X')
	{
		base = 16;
		prefix = '0';
		if (format_specifier == 'X')
			prefix = '0' + ('X' - 'x');
	}
	if (prefix != '\0')
	{
		str[i++] = prefix;
		count++;
	}
	while (num > 0)
	{
		int digit = num % base;

		if (digit < 10)
			str[i++] = digit + '0';
		else
			str[i++] = digit - 10 + 'a';
		num /= base;
	}
	if (i == 0)
	{
		str[i++] = '0';
	}
	if (neg)
	{
		sign = '-';
	}
	else
	{
		if ((prefix == '\0') || (prefix == ' '))
		{
			sign = ' ';
		}
		else
		{
			sign = '+';
		}
	}
	if (sign != '\0')
	{
		str[i++] = sign;
	}
	while (i > 0)
	{
		write(STDOUT_FILENO, &str[--i], 1);
		count++;
	}
}

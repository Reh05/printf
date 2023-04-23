#include <unistd.h>
/**
  * printc - prints character
  * @num: value entered
  *
  * Return: Returns number of chars printed
  */
int printc(int num)
{
	return (write(1, &num, 1));
}

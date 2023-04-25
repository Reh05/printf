#include <unistd.h>
/**
  * printc - prints character
  * @c: value entered
  *
  * Return: Returns number of chars printed
  */
int printc(const int c)
{
	int ret = (write(STDOUT_FILENO, &c, 1));

	return (ret);
}

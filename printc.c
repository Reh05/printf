#include <unistd.h>
/**
  * printc - prints character
  * @c: value entered
  *
  * Return: Returns number of chars printed
  */
int printc(int c)
{
	int ret = (write(STDOUT_FILENO, &c, 1));

	if (ret == -1)
		perror("write");
	return (ret);
}

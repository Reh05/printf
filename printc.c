#include <unistd.h>
/** 
  * printc - prints character
  * @num: value entered
  */
int printc(int num)
{
	return (write(1, &num, 1));
}

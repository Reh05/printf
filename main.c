#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        char c = 'a';
        char *str = NULL;
	char *name = "Rehema";
	int len = 0;
	int len2 = 0;
	len = _printf("my name is: %s", name);
	len2 = printf("My name is: %s", name);


        _printf("Character:[%c]\n", c);
    printf("Character:[%c]\n", c);
    _printf("String:[%s]\n", str);
    printf("String:[%s]\n", str);
    printf("%d\n", len);
    printf("%d\n", len2 );

    return (0);
}

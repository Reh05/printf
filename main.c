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

        _printf("Character:[%c]\n", c);
    printf("Character:[%c]\n", c);
    _printf("String:[%s]\n", str);
    printf("String:[%s]\n", str);

    return (0);
}

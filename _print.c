#include "main.h"
/**
 *_print - function to print
 *@str: string to print
 */
void _print(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

#include "main.h"
/**
 *_putchar - function to print a character
 *@c: string to print
 *Return: character
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

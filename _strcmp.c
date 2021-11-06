#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: first array
 *@s2: second array
 *Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 != *s2)
{
return (1);
}
s1++;
s2++;
}
return (0);
}

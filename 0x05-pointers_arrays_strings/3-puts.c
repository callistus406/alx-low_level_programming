#include "main.h"

/**
 * _puts - Print a string folllowed by a new line.
 *
 * @str: String to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}

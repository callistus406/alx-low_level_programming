#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

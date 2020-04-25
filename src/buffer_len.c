#include "../lib/sherly.h"

/**
 * buflen - size of bufer
 * @str: input string
 * Return: size of bufer
 */

size_t buflen(char *str)
{
	size_t size;

	size = 0;
	while (str[size])
		size++;

	return (size);
}

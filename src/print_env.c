#include "../lib/sherly.h"

/**
 * prnt_env - function that print env
 * @env: input enviroment varables
 * Return: void
 */

void prnt_env(char **env)
{
	size_t s = 1;

	while (*(s + env))
	{
		write(STDOUT_FILENO, *(s + env), buflen(*(s + env)));
		write(STDOUT_FILENO, "\n", 1);
		s++;
	}
}

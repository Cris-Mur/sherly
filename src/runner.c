#include "../lib/sherly.h"

/**
 * runner - function that execute apps
 * @argv: input argument vector
 * Return: always 0 (success)
 */
int runner(char **cmd)
{
	if (cmd)
	{
		if(execve(cmd[0], cmd, environ) == -1)
		{
			perror("Execve Error\n");
			return (1);
		}
	}
	return (0);
}

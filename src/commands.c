#include "../lib/sherly.h"

/**
 * cmmd - commands of the shell
 * @buff: input string command
 * Return: void
 */

void cmmd(char *buff)
{
	char **cmd = NULL;
	pid_t children;
	/*int x = 0;*/

	if (buff)
	{
		if (!buff || strcmp(buff, "exit") == 0)
		{
			write(STDOUT_FILENO, "bye...\n", 7);
			exit(0);
		}
	    if (strcmp(buff, "help") == 0)
		{
			prntfl("rsrc/help");
			return;
		}
		if (strcmp(buff, "version") == 0)
		{
			write(STDOUT_FILENO, ".1\n", 3);
			return;
		}
		if (buff)
		{
			cmd = mkcmd(buff);
			children = fork();
			if (children == 0)
			{
				if (execve(cmd[0], cmd, environ) == -1)
				{
					write(STDERR_FILENO, "Uy papi algo salio mal :(\n", 27);
					exit(1);
				}

			}
			else
			{
				wait(&children);
				free(cmd);
			}
		}
	}
}

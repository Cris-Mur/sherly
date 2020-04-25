#include "../lib/sherly.h"

/**
 * cmmd - commands of the shell
 * @buff: input string command
 * Return: void
 */

void cmmd(char *buff)
{
	char **cmd = NULL;
	int x = 0;

	if (buff)
	{
	        if (strcmp(buff, "help") == 0)
		{
			prntfl("rsrc/help.txt");
		}
		if (strcmp(buff, "version") == 0)
		{
			write(STDOUT_FILENO, ".1\n", 3);
		}
		if (buff)
		{
			cmd = mkcmd(buff);
			while (*(x + cmd))
			{
				write(STDOUT_FILENO, cmd[x], buflen(cmd[x]));
				write(1, "\n", 1);
				x++;
			}
			free(cmd);
		}
	}
	if (!buff || strcmp(buff, "exit") == 0)
	{
		write(STDOUT_FILENO, "bye...\n", 7);
		exit(0);
	}
}

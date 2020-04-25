#include "../lib/sherly.h"

/**
 * cmdlp - argv logic loop
 * @cmd: argv input
 * Return: void temporally
 */

void cmdlp(char **cmd)
{
	size_t s = 1;

	while (*(s + cmd))
	{
		if (strcmp(*(s + cmd), "--help") == 0)
		{
			prntfl("rsrc/help");
			exit(0);
		}
		if (strcmp(*(s + cmd), "-v") == 0)
		{
			prntfl("rsrc/version");
			exit(0);
		}
		s++;
	}
}

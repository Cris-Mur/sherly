#include "../lib/sherly.h"



/**
 * cmdlp - argv logic loop
 * @cmd: argv input
 * Return: void temporally
 */

void cmdlp(char **cmd)
{
	while (*(s + argv))
	{
		if (strcmp(*(s + argv), "--help") == 0)
		{
			write();
			exit(0);
		}
		s++;
	}

}

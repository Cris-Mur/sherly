#include "../lib/sherly.h"

/**
 * sigout - signal output
 */
static void sigout(int sig)
{
	(void) sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}

/**
 * main - main function of Sherly
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

pid_t sherly;
pid_t psherly;

int main(int argc, char **argv)
{
	int x = 0;
	char *buff = NULL;
	size_t size_buff = 0;

	sherly = getpid(); /* Returns process ID of calling process */
	psherly = getppid(); /* Returns parent process ID of calling process*/

	(void) argc;

	cmdlp(argv);

	while (x < 10)
	{
		write(1, "[sherly]$ ", 10);
		signal(SIGINT, sigout);
		if (getline(&buff, &size_buff, stdin) == -1)
			break;
		if (buff[0] != 10)
		{
			buff = strndup(buff, (buflen(buff) - 1));
			cmmd(buff);
		}

		if (!buff)
			break;

		x++;
	}
	write(STDOUT_FILENO, "adios... ;)\n", 13);
	return (0);
}

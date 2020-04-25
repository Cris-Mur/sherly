#include "../lib/sherly.h"

#define _ERR 0

/**
 * prntfl - print file stdout
 * @filename: input name of the file
 * Return: always 1 (success)
 */

int prntfl(char *buffersito)
{
	ssize_t log, op;

	if (buffersito)
	{
		log = open(buffersito, O_RDONLY);
		if (log <= 1)
			return (_ERR);

		op = log;
		buffersito = malloc(sizeof(char) * 720);
		if (buffersito == NULL)
		{
			return (_ERR);
		}
		log = read(log, buffersito, 1024);
		if (log == -1)
			return (_ERR);
		log = buflen(buffersito);
		log = write(STDOUT_FILENO, buffersito, log);
		if (log == -1)
		{
			free(buffersito);
			return (_ERR);
		}
		free(buffersito);
		return (close(op) == 1 ? -1 : log);
	}
	return (_ERR);
}

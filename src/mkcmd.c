#include "../lib/sherly.h"

/**
 * cwrd - count words of the one string
 * @str: input string
 * Return: n words
 */
size_t cwrd(char *str)
{
	const char *s = str;
	size_t nwrd = 0, x = 0;

	do switch (*s) {
		case '\0':
		case ' ': case '\t': case '\n': case '\r':
			if (x)
			{
				x = 0;
				nwrd++;
			}
			break;
		default: x = 1;
		} while (*s++);
	return (nwrd);
}

/**
 * mkcmd - make an array of string
 * @cmd: input entire command without path
 * Return: argument verctor
 */

char **mkcmd(char *cmd)
{
	char *buff = NULL, *str = cmd;
	char **vec = NULL;
	size_t nwrd = 0, x;
	nwrd = cwrd(cmd);

	vec = (char **)malloc(sizeof(char *) * (nwrd + 1));

	buff = strtok(str, " ");

	x = 0;
	while (x <= nwrd && buff)
	{
		if (buff[0] == '"')
		{
			*(x + vec) = strdup(buff + 1);
			buff = strtok(NULL, "\"");
		}
		else
		{
			*(x + vec) = strdup(buff);
			buff = strtok(NULL, " ");
		}
		x++;
	}
	return (vec);
}

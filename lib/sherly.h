#ifndef _SHERLY_H_
#define _SHERLY_H_

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

extern char **environ;

void cmdlp(char **cmd);
int prntfl(char *buffersito);
size_t buflen(char *str);
void prnt_env(char **env);
void cmmd(char *buff);
int runner(char **cmd);
char **mkcmd(char *cmd);
#endif /*_SHERLY_H_*/

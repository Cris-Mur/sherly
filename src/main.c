#include "../lib/sherly.h"

/**
 * main - main function of Sherly
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(void)
{
	char *hi = "Sherly said to world Hello baby\n";

	write(1, hi, strlen(hi));
	return (0);
}

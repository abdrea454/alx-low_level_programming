#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
	\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

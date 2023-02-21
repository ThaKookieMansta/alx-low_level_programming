#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char text[] = "_putchar\n";

	write(STDOUT_FILENO, text, 9);
	return (0);
}

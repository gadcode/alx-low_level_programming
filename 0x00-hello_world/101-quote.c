#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: quote in standard error.
 */
int main(void)
{
	const char *quote = "and that piece of art is useful\"\
			     - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, quote, strlen(quote));
	return (1);
}

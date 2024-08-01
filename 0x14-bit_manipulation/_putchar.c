#include <unistd.h>

/**
 * _putchar - function that helps print a single character to the screen
 * @c: the character to print
 * Return: 1 if on success, -1 if on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

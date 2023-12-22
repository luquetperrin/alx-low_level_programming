#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the number of the character _ should be printed
 *
 * Return: a straight line
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

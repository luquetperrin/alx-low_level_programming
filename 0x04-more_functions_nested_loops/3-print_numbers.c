#include "main.h"

/**
 * print_numbers - prints digits from 0 to 9
 *
 * Return: digits from 0 to 9 as output
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number > '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}

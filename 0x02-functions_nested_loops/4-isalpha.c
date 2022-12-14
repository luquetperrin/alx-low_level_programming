#include "main.h"

/**
 * _isalpha - Cheks for alphabetic chararcter
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}

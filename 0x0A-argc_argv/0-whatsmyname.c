#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/**
	 * @program_name: Pointer to the program name
	 */
	char *program_name;

	program_name = argv[0];
	printf("%s\n", program_name);

	return (0);
}

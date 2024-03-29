#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return 0;
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				fprintf(stderr, "Error\n");
				return 1;
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return 0;
}

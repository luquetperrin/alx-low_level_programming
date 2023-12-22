#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number that needs to find the prime factor
 *
 * Return: the last prime factor
 */
long largest_prime_factor(long n)
{
	long i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			if (n == i)
				return (n);
			n /= i;
		}
	}
	return (0);
}
int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);
	return (0);
}

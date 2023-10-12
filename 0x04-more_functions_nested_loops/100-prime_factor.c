#include <stdio.h>
#include <math.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	long n;
	long maxPrime;
	int i;

	maxPrime = -1;
	n = 25698751364526;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}

	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}

	for (i = 5; i * i <= n; i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}

	if (n > 4)
		maxPrime = n;

	printf("%ld", maxPrime);

	return (0);
}

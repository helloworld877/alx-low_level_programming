#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

void addStrings(char *a, char *b, char *result)
{
	int carry = 0;
	int sum;
	int length_a = strlen(a);
	int length_b = strlen(b);
	int length, m;
	char temp;

	int i = length_a - 1;
	int j = length_b - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += a[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += b[j] - '0';
			j--;
		}

		carry = sum / 10;
		result[k] = sum % 10 + '0';
		k++;
	}

	result[k] = '\0';

	length = strlen(result);

	for (m = 0; m < length / 2; m++)
	{
		temp = result[m];

		result[m] = result[length - m - 1];
		result[length - m - 1] = temp;
	}
}

void fibonacci(int n)
{
	char a[MAX_DIGITS];
	char b[MAX_DIGITS];
	char c[MAX_DIGITS];
	int i;

	strcpy(a, "1");
	strcpy(b, "2");

	printf("%s, %s, ", a, b);

	for (i = 3; i <= n; i++)
	{
		addStrings(a, b, c);

		printf("%s", c);

		if (i < n)
		{
			printf(", ");
		}

		strcpy(a, b);
		strcpy(b, c);
	}

	printf("\n");
}

int main(void)
{
	fibonacci(98);
	return (0);
}

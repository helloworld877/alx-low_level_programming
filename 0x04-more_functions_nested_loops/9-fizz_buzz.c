#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
    int i, fizz, buzz;

    for (i = 1; i <= 100; i++)
    {
        fizz = i % 3;
        buzz = i % 5;

        if (fizz == 0 && buzz == 0)
        {
            printf("FizzBuzz ");
        }
        else if (fizz == 0)
        {
            printf("Fizz ");
        }
        else if (buzz == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return (0);
}

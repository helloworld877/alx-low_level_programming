#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        for (int x = 'A'; x <= 'Z'; x++)
        {
                int lower_x = tolower(x);
                putchar(lower_x);
        }
        for (int x = 'A'; x <= 'Z'; x++)
        {
                putchar(x);
        }
        putchar('\n');
        return (0);
}

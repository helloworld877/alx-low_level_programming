#include<stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
const char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1,txt,sizeof(txt));
return (0);
}

#include <stdio.h>
/**
 * main - Program to print the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0 (Successful)
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}

for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}

#include <stdio.h>
/**
 *main - Program prints all single digit numbers
 * of base 10 stating from 0
 *followed by a newline
 */

int main(void)
{
char c;
for (c = 'z'; c>= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}

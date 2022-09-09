#include <stdio.h>
/**
 *main - Program prints all single digit numbers
 * of base 10 stating from 0
 *followed by a newline
 */

int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

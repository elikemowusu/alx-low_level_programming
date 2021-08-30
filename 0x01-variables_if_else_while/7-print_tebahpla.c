/* file: 7-print_tebahpla.c
 * Auth: Derrick Owusu
 */

#include <stdio.h>

/**
 * main print the lowercase alphabets in reverse.
 *
 * return: Always 0.
 */

int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)

putchar(letter);

putchar('\n');

return (0);
}

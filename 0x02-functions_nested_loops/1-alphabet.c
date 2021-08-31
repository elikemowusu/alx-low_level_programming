#include "main.h"
#include <stdio.h>

/**
 * Main - prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
print_alphabet();
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}

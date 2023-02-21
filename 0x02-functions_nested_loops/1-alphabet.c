#include "main.h"

/**
 * print_alphabet - Entry point
 *Description - prints alphabet, in lowercase, ollowed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

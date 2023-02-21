#include <stdio.h>
/**
 * Main - Entry point of program
 * Finds first 100 fibonacci numbers
 *prints starting with 1 and 2,followed by newline 
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
unsigned int a = 1, b = 2, c;
printf("%u, %u", a, b);
for (i = 3; i <= 98; i++)
{
c = a + b;
printf(", %u", c);
a = b;
b = c;
}
printf("\n");  
return (0);
}

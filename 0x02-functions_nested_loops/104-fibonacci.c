#include <stdio.h>
/**
 * Main - Entry point
 * Finds and prints first 100 fibonacci numbers, starting with 1 and 2, followed by new line
 * Return: Always 0
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
return 0;
}

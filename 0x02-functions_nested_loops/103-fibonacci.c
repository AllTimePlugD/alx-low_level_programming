#include <stdio.h>
/**
* Main - Entry point
* Finds and prints sum of valued even terms, followed by new line
*Return: Always 0
*/
int main(void)
{
int sum = 0;
int prev = 1;
int curr = 2;
int temp;
while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}
temp = curr;
curr = curr + prev;
prev = temp;
}
printf("%d\n", sum);
return (0);
}

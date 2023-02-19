

#include <stdio.h>

int main(void)
{
  int lowercase = 97; // ASCII value for 'a'
  int uppercase = 65; // ASCII value for 'A'

  while (lowercase <= 122) // ASCII value for 'z'
  {
    putchar(lowercase);
    lowercase++;
  }

  while (uppercase <= 90) // ASCII value for 'Z'
  {
    putchar(uppercase);
    uppercase++;
  }

  putchar('\n');

  return (0);
}


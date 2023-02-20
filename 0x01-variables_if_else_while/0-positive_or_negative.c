include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*if number is greater than 0 print positive
 *if the number is less than o print negative , 
 *if the number is zero then print 0
 *return : always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	 printf("The number is positive %d\n",n);
	 else
	 if (n<0)
	  printf("The number is negative %d\n,n");
	  else
	   printf("The number is zero %d\n,n");
	   
	return (0);
}


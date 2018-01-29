//Q9a

#include <stdio.h>

int main( void )
{
	int n,i,fact;
	fact = 1;
	printf("Enter a number : \n");
	scanf("%d",&n);
	for(i = n; i >= 1; i--)
		fact = fact * i;
	printf("The factorial of %d is = %d \n",n,fact);
	return 0;
}

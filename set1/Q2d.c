//Q2d

#include <stdio.h>

int main( void )
{
	int n1,n2;
	double div;
	printf("Enter the dividend and the divisor \n");
	scanf("%d %d",&n1,&n2);
	div = (double)n1/(double)n2;
	printf("The quotient of %d and %d is = %.3e \n",n1,n2,div);
	return 0;
}

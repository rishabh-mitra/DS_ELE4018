//Q2d

#include <stdio.h>

int main( void )
{
	int n1,n2;
	float div;
	printf ("Enter 2 numbers : \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	div = float(n1/n2);
	printf("The result of %d/%d is = %9.3f \n",n1,n2,div);
	return 0;
}

//Q5a

#include <stdio.h>

int main( void )
{
	int n1,n2,n3;
	printf("Enter two numbers \n");
	scanf("%d %d",&n1,&n2);
	printf("Numbers before swapping are %d and %d \n",n1,n2);
	n3=n1;
	n1=n2;
	n2=n3;
	printf("Numbers after swapping are %d and %d \n",n1,n2);
	return 0;
}
